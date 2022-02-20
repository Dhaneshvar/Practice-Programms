var app = angular.module('addApp',[])
app.controller('addCtrl',function($scope){

	$scope.sumNum = function(a,b)
	{
		$scope.a1 = parseInt(a) + parseInt(b);
	}

	$scope.subNum = function(a,b)
	{
		$scope.b1 = parseInt(a) - parseInt(b);
	}

	$scope.mulNum = function(a,b)
	{
		$scope.m1 = parseInt(a) * parseInt(b);
	}

	$scope.divNum = function(a,b)
	{
		$scope.d1 = parseInt(a) / parseInt(b);
	}
});