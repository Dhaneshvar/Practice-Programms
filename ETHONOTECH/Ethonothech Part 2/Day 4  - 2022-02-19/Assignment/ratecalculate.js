var app = angular.module('hotel',[])
app.controller('addCtrl',function($scope){
	$scope.calcu = function(q1,r1,d1)
	{
		$scope.quantity = parseInt(q1);
		$scope.rate = parseInt(r1);
		$scope.ga = $scope.quantity * $scope.rate;
		$scope.dis = parseInt(d1);
		$scope.disamt = 0;
		if($scope.ga >= 500)
		{
			$scope.disamt += ($scope.ga*10)/100;
		}
		if($scope.dis > 0)
		{
			$scope.disamt += ($scope.ga * $scope.dis)/100;		
		}
		$scope.na = $scope.ga - $scope.disamt;
	}

	$scope.calcu2 = function(q2,r2,d2)
	{
		$scope.quantity2 = parseInt(q2);
		$scope.rate2 = parseInt(r2);
		$scope.ga2 = $scope.quantity2 * $scope.rate2;
		$scope.dis2 = parseInt(d2);
		$scope.disamt2 = 0;
		if($scope.ga2 >= 500)
		{
			$scope.disamt2 += ($scope.ga2*10)/100;
		}
		if($scope.dis2 > 0)
		{
			$scope.disamt2 += ($scope.ga2 * $scope.dis2)/100;		
		}
		$scope.na2 = $scope.ga2 - $scope.disamt2;
	}
	$scope.total = function(totga,totna)
	{	
		$scope.tga = $scope.ga + $scope.ga2;
		$scope.tna = $scope.na + $scope.na2;
		alert("Your NET AMOUNT is "+$scope.tna);
	}
});