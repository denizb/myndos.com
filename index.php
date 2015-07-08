<?
$page['title'] = "Home";
$page['class'] = "home"; 

?>
<? include('includes/header.inc'); ?>

<div class="section">
	<div class="flexslider">
		<ul class="slides">
			<li><img src="assets/img/home-slide-1.jpg" height="520" width="940"></li>
			<li><img src="assets/img/home-slide-2.jpg" height="520" width="940"></li>
			<li><img src="assets/img/home-slide-9.jpg" height="520" width="940"></li>
			<li><img src="assets/img/home-slide-6.jpg" height="520" width="940"></li>
			<li><img src="assets/img/home-slide-3.jpg" height="520" width="940"></li>
			<li><img src="assets/img/home-slide-10.jpg" height="520" width="940"></li>
		</ul>
	</div>
</div>

<div class="row">
	
	<div class="span8">
	
		<div class="row" style="margin-bottom: 40px">
			<div class="span8">
				<div class="content">
					<h2>Myndos Bed And Breakfast</h2>
					<p><?=getLocalString('text1');?></p>
					
					<p><?=getLocalString('text2');?></p>
					
				</div>
			</div>
		</div>
		
	</div>
	
	<div class="span4">
	
		<div class="section">
		<a href="/<?=$lang?>/virtual-tour.php" class="btn btn-block btn-success"><?=getLocalString('Tour');?></a>
		</div>
		
		<div class="section">
		<!-- Yahoo! Weather Badge -->
		<div id="wx_module_378">
		   <a href="http://www.weather.com/weather/local/TUXX0056">Bodrum Weather Forecast, Turkey</a>
		</div>
		</div>
		
		<script type="text/javascript">
		
		   /* Locations can be edited manually by updating 'wx_locID' below.  Please also update */
		   /* the location name and link in the above div (wx_module) to reflect any changes made. */
		   var wx_locID = 'TUXX0056';
		
		   /* If you are editing locations manually and are adding multiple modules to one page, each */
		   /* module must have a unique div id.  Please append a unique # to the div above, as well */
		   /* as the one referenced just below.  If you use the builder to create individual modules  */
		   /* you will not need to edit these parameters. */
		   var wx_targetDiv = 'wx_module_378';
		
		   /* Please do not change the configuration value [wx_config] manually - your module */
		   /* will no longer function if you do.  If at any time you wish to modify this */
		   /* configuration please use the graphical configuration tool found at */
		   /* https://registration.weather.com/ursa/wow/step2 */
		   var wx_config='SZ=300x250*WX=FHW*LNK=SSNL*UNT=C*BGI=spring*MAP=europe|null*DN=www.myndos.com*TIER=0*PID=1036366777*MD5=54c89d16e3d3430360b96d5d953eef5a';
		
		   document.write('<scr'+'ipt src="'+document.location.protocol+'//wow.weather.com/weather/wow/module/'+wx_locID+'?config='+wx_config+'&proto='+document.location.protocol+'&target='+wx_targetDiv+'"></scr'+'ipt>');  
		</script><!-- Yahoo! Weather Badge -->
		
		<div class="section">
			<div class="fb-follow" data-href="http://www.facebook.com/MyndosBedAndBreakfast" data-show-faces="true" data-width="300"></div>
		</div>
		
		<div class="section">
			<a href="/<?=$lang?>/reservations.php" class="btn btn-primary btn-large btn-block"><?=getLocalString('make_reservation');?></a>
		</div>
		<!--
		<div class="fb-like-box" data-href="http://www.facebook.com/MyndosBedAndBreakfast" data-width="300" data-height="500" data-show-faces="true" data-stream="true" data-header="true"></div>
		-->
	</div>

</div>


	



<div class="row">

	<div class="span12 section" style="margin-bottom: 40px">
	
		<h4>Photo Gallery</h4>
	
		<object width="100%" height="650"> <param name="flashvars" value="offsite=true&lang=en-us&page_show_url=%2Fphotos%2Fdenizb%2Fsets%2F72157633111531307%2Fshow%2F&page_show_back_url=%2Fphotos%2Fdenizb%2Fsets%2F72157633111531307%2F&set_id=72157633111531307&jump_to="></param> <param name="movie" value="http://www.flickr.com/apps/slideshow/show.swf?v=124984"></param> <param name="allowFullScreen" value="true"></param><embed type="application/x-shockwave-flash" src="http://www.flickr.com/apps/slideshow/show.swf?v=124984" allowFullScreen="true" flashvars="offsite=true&lang=en-us&page_show_url=%2Fphotos%2Fdenizb%2Fsets%2F72157633111531307%2Fshow%2F&page_show_back_url=%2Fphotos%2Fdenizb%2Fsets%2F72157633111531307%2F&set_id=72157633111531307&jump_to=" width="400" height="300"></embed></object>
	
	</div>

</div>

<div class="row home-sections" style="margin-bottom: 40px">
			<div class="span4">
				<a href="/<?=$lang?>/rooms.php"><img src="assets/img/home-sections-rooms.jpg"  width="300" alt="Guest Rooms"></a>
				<h3><a href="/<?=$lang?>/rooms.php"><?=getLocalString('Accommodations');?></a></h3>
				<p><?=getLocalString('homeblurb1');?></p>
			</div>
			<div class="span4">
				<a href="/<?=$lang?>/rooms.php#breakfast"><img src="assets/img/home-sections-breakfast.jpg" alt="Turkish Style Breakfast" width="300"></a>
				<a href="/<?=$lang?>/rooms.php#breakfast"><h3><?=getLocalString('breakfast');?></h3></a>
				<p><?=getLocalString('homeblurb2');?></p>
			</div>

			<div class="span4">
				<a href="/<?=$lang?>/map.php"><img src="assets/img/home-sections-maps.jpg"  width="300"></a>
				<a href="/<?=$lang?>/map.php"><h3><?=getLocalString('Map');?></h3></a>
				<p><?=getLocalString('homeblurb3');?></p>
			</div>
			
		</div>



<? /*
<div class="sidebar">
	<h3><?=getLocalString('Reservations');?></h3>
	<p>+90 252 394 3945</p>
	<p><SCRIPT TYPE="text/javascript">
		<!-- 
		e=('bedandbreakfast@' + 'myndos.com')
		document.write('<a href="mailto:' + e + '">' + e + '</a>')
		 //-->
	   </script></p>
</div>
*/ ?>


<? include('includes/footer.inc'); ?>