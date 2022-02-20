var app = angular.module('empSal',[])
app.controller("addCtrl",function($scope){
	$scope.calculate = function(bsalary)
	{
		
		$scope.BasicSal  =  parseInt(bsalary);

		$scope.HRA = $scope.BasicSal * (10/100);
		$scope.DA = $scope.BasicSal * (10/100);
		$scope.EPF = $scope.BasicSal * (10/100);

		$scope.GA = $scope.HRA + $scope.DA+ $scope.BasicSal;
		$scope.NA = $scope.GA - $scope.EPF;
		
	}
	$scope.print = function(fname,lname,gmail,cnumber)
	{
		$scope.FirstName =  fname;
		$scope.LastName  =  lname;
		$scope.Gmail 	 =  gmail;
		$scope.PNumber   =  cnumber;
	}
});