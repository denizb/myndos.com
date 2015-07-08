<?
$page['title'] = "Accommodations";
$page['class'] = "rooms"; 

?>
<? include('includes/header.inc'); ?>

<div class="section banner">
	<div class="flexslider">
		<ul class="slides">
			<li><img src="assets/img/banner-rooms-2.jpg" width="940" /></li>
		</ul>
	</div>
</div>

<div class="row main">
	<div class="span12">
		<h2><?=getLocalString('Accommodations');?></h2>
		<h3><?=getLocalString('rooms_subtitle');?></h3>
		<p><?=getLocalString('text2');?></p>
		<p><?=getLocalString('text4');?></p>
	</div>
</div>

<? /*

<div class="row roompics">
	<div class="span4"><a href="assets/img/room-floor-plan.jpg" rel="lightbox"><img src="assets/img/room-floor-plan-thumb.jpg" width="238" height="300" /></a></div>
	<div class="span8 sidenote">
		<p><?=getLocalString('text4');?></p>
	</div>
</div>

<div class="row roompics">
	<div class="span8"><a href="assets/img/rooms1.jpg" rel="lightbox"><img src="assets/img/rooms1.jpg" height="400" /></a></div>
	
	<!--
	<div class="span4 sidenote">
		<h3>The garden</h3>
		<p>Some text here describes how pretty the garden is.</p>
	</div>
	-->
</div>

<div class="row roompics">
	<!--
	<div class="span2 sidenote">
		<h3>The garden</h3>
		<p>Some text here describes how pretty the garden is.</p>
	</div>
	-->
	<div class="span10 offset2"><a href="assets/img/rooms2.jpg" rel="lightbox"><img src="assets/img/rooms2.jpg"  height="400" /></a></div>
</div>

<div class="row roompics">
	<div class="span8"><a href="assets/img/rooms3.jpg" rel="lightbox"><img src="assets/img/rooms3.jpg"  height="400" /></a></div>
	<!--
	<div class="span4 sidenote">
		<h3>The garden</h3>
		<p>Some text here describes how pretty the garden is.</p>
	</div>
	-->
</div>

	<div class="span6 sidenote">
		<h3><?=getLocalString('Accommodations');?></h3>
		<p><?=getLocalString('text4');?></p>
	</div>

*/ ?>

<div class="row roompics">

	<div class="span12">
		<ul class="thumbnails">
			<li class="span3">
				<a href="assets/img/rooms-exterior-1.jpg" class="thumbnail"> 
					<img src="assets/img/rooms-exterior-1_thumb.jpg" alt="">
					<h6>Cabin exterior</h6>
				</a>
			</li>
			<li class="span3">
				<a href="assets/img/rooms-exterior-2.jpg" class="thumbnail">
					<img src="assets/img/rooms-exterior-2_thumb.jpg" alt="">
					<h6>Cabin entrances</h6>
				</a>
			</li>
			<li class="span3">
				<a href="assets/img/rooms-exterior-3.jpg" class="thumbnail" >
					<img src="assets/img/rooms-exterior-3_thumb.jpg" alt="">
					<h6>Side by side rooms</h6>
				</a>
			</li>
			<li class="span3">
				<a href="assets/img/rooms-exterior-4.jpg" class="thumbnail">
					<img src="assets/img/rooms-exterior-4_thumb.jpg" alt="">
					<h6>Buganvilias</h6>
				</a>
			</li>
			<li class="span3">
				<a href="assets/img/rooms-interior-1.jpg" class="thumbnail">
					<img src="assets/img/rooms-interior-1_thumb.jpg" alt="">
					<h6>Fireplace in every room</h6>
				</a>
			</li>
			<li class="span3">
				<a href="assets/img/rooms-interior-2.jpg" class="thumbnail">
					<img src="assets/img/rooms-interior-2_thumb.jpg" alt="">
					<h6>Two single bed rooms</h6>
				</a>
			</li>
			<li class="span3">
				<a href="assets/img/rooms-interior-3.jpg" class="thumbnail">
					<img src="assets/img/rooms-interior-3_thumb.jpg" alt="">
					<h6>Double bed rooms</h6>
				</a>
			</li>
			<li class="span3">
				<a href="assets/img/room-floor-plan.jpg" class="thumbnail">
					<img src="assets/img/room-floor-plan-thumb.jpg" alt="">
					<h6>Floor plan</h6>
				</a>
			</li>
		
		</ul>
		
		<div class="section" style="text-align:center">
		<a href="/<?=$lang?>/virtual-tour.php" class="btn btn-large btn-success"><?=getLocalString('Tour');?></a>
		</div>	
		
	</div>

</div>





<div class="row" style="margin-bottom: 30px;">
	<div class="span12">
		<h2><?=getLocalString('header2');?></h2>
		<img src="assets/img/banner-breakfast-1.jpg" width="940" height="400">
		<h6>Breakfast and recreation area covered in feet cooling grass</h6>
	</div>
</div>

<!--

<div class="row" style="margin-bottom: 30px;">
	<div class="span12">
		<p><?=getLocalString('text5');?></p>
	</div>
</div>
<div class="row" style="text-align: center" style="margin-bottom: 30px;">
	<div class="span12">
		
		<img src="assets/img/organic-egg.jpg"  width="497" height="429"/>
	</div>
</div>
-->


<div class="row roompics">
	<div class="span6">
		
		<!--<a href="assets/img/turkish-breakfast.jpg" class="lightbox"><img src="assets/img/turkish-breakfast_280.jpg"  width="280" /></a>-->
		<img src="assets/img/organic-egg2.jpg"  width="497" />
		
		
	</div>
	<div class="span5 sidenote" >
		<p>&nbsp;</p>
		<p>&nbsp;</p>
		<p><?=getLocalString('text5');?></p>
	</div>
</div>



<? include('includes/footer.inc'); ?>