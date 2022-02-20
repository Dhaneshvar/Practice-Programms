var app = angular.module('hotel',[])
app.controller('addCtrl',function($scope){
	$scope.calcu = function(q1,r1)
	{
		$scope.quantity = parseInt(q1);
		$scope.rate = parseInt(r1);
		$scope.ga = $scope.quantity * $scope.rate;
		$scope.d = parseInt(d1);
		if($scope.ga >= $scope.d)
		{
			$scope.d = ($scope.ga*10)/100;
		}
		$scope.na = $scope.ga - $scope.d;
	}
});