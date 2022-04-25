<?php
	use \Core\Route;
	
	return [
		new Route('/nums/:n1/:n2/:n3/', 'num', 'acta'),
		new Route('/test/:var1/:var2/', 'page', 'act'),
		new Route('/us/:id/', 'user', 'show1'),
		new Route('/act1/', 'Test', 'act1'),
		new Route('/act2/', 'Test', 'act2'),
		new Route('/act3/', 'Test', 'act3'),
		new Route('/my-page1/', 'page', 'show1'),
		new Route('/my-page2/', 'page', 'show2'),
	];
?>