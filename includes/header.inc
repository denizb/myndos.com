<? include_once('includes/localisation.inc') ?>
<!doctype html>
<!--[if lt IE 7]> <html class="no-js lt-ie9 lt-ie8 lt-ie7" lang="en"> <![endif]-->
<!--[if IE 7]>    <html class="no-js lt-ie9 lt-ie8" lang="en"> <![endif]-->
<!--[if IE 8]>    <html class="no-js lt-ie9" lang="en"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js" lang="<?=$lang?>"> <!--<![endif]-->
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

	<title>Myndos Bed and Breakfast - <?=$page['title']?></title>
	<meta name="description" content="">
	<meta name="author" content="">

	<meta name="viewport" content="width=device-width">
	
	<link rel="stylesheet" href="assets/css/bootstrap.min.css">
	<!--link rel="stylesheet" href="css/bootstrap-responsive.min.css"-->
	<link rel="stylesheet" href="/assets/css/flexslider.css">
	<link rel="stylesheet" href="/assets/css/style.css?v=2">
	<link rel="stylesheet" href="/assets/css/ui-lightness/jquery-ui-1.8.21.custom.css">
	<link rel="stylesheet" href="/assets/css/jquery.lightbox-0.5.css">
	
	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js"></script>
	<script>window.jQuery || document.write('<script src="assets/js/jquery-1.7.2.min.js"><\/script>')</script>
	
	<!-- scripts concatenated and minified via ant build script-->
	<script src="/assets/js/bootstrap.min.js"></script>
	<script src="/assets/js/jquery.flexslider.js"></script>
	<script src="/assets/js/jquery-ui-1.8.21.custom.min.js"></script>
	<script src="/assets/js/jquery.lightbox-0.5.js"></script>
	<!-- end scripts-->	
	
	
	<? if (isset($_GET['bg'])) { ?>
	<style type="text/css">
		body{ background: #0f3054 url(http://denizinc.com/myndos/assets/img/<?=$_GET['bg']?>.jpg) repeat; }
	</style>
	<? } ?>
	
</head>
<body class="<?=$page['class']?>">

<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>

<div class="container">
	<div class="section">
		
		<ul class="nav language">
			<li><a href="/tr/" class="tr <? if ($lang == "tr") { ?> active <? } ?>">Turkish</a>
			<li><a href="/en/" class="en <? if ($lang == "en") { ?> active <? } ?>">English</a>
			<!--<li><a href="?lang=fr" class="fr <? if ($lang == "fr") { ?> active <? } ?>">French</a>
			<li><a href="?lang=de" class="de <? if ($lang == "de") { ?> active <? } ?>">German</a>-->
		</ul>
	</div>
	<div class="section header">
		<div class="logo-wrapper">
			<a href="http://myndos.com/" alt="Myndos Bed And Breakfast by the Beach" class="logo">
				<h1>Myndos Bed And Breakfast</h1>
			</a>
		</div>
		<div class="nav-wrapper">
			<ul class="nav main">
				<li <? if ($page['class'] == "home") { ?> class="active" <? } ?>><a href="/<?=$lang?>/index.php"><?=getLocalString('Home');?></a></li>
				<li <? if ($page['class'] == "rooms") { ?> class="active" <? } ?>><a href="/<?=$lang?>/rooms.php"><?=getLocalString('Accommodations');?></a></li>
				
				<li <? if ($page['class'] == "tour") { ?> class="active" <? } ?>><a href="/<?=$lang?>/virtual-tour.php"><?=getLocalString('Tour');?></a></li>
				
				<li <? if ($page['class'] == "map") { ?> class="active" <? } ?>><a href="/<?=$lang?>/map.php"><?=getLocalString('Map');?></a></li>
				<li <? if ($page['class'] == "reservations") { ?> class="active" <? } ?>><a href="/<?=$lang?>/reservations.php"><?=getLocalString('Reservations');?></a></li>
				
				<? /*
				<li <? if ($page['class'] == "home") { ?> class="active" <? } ?>><a href="index.php?lang=<?=$lang?>"><?=getLocalString('Home');?></a></li>
				<li <? if ($page['class'] == "rooms") { ?> class="active" <? } ?>><a href="rooms.php?lang=<?=$lang?>"><?=getLocalString('Accommodations');?></a></li>
				<li <? if ($page['class'] == "map") { ?> class="active" <? } ?>><a href="map.php?lang=<?=$lang?>"><?=getLocalString('Map');?></a></li>
				<li <? if ($page['class'] == "reservations") { ?> class="active" <? } ?>><a href="reservations.php?lang=<?=$lang?>"><?=getLocalString('Reservations');?></a></li>
				*/ ?>
				
			</ul>
		</div>
	</div>