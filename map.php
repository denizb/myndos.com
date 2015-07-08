<?
$page['title'] = "Map";
$page['class'] = "map"; 

?>
<? include('includes/header.inc'); ?>

<div class="section banner">
	<div class="flexslider">
		<ul class="slides">
			<li><img src="assets/img/banner-map.jpg" width="940" /></li>
		</ul>
	</div>
</div>
<h2><?=getLocalString('Map')?></h2>


<div class="row main">	
	<div class="span12">
	<h3>Aeareal view of Gümüşlük</h3>
		<ul class="thumbnails">
			<li class="span3">
				<a href="assets/img/aerial-photo-gumusluk-1.jpg" class="thumbnail"> 
					<img src="assets/img/aerial-photo-gumusluk-1_thumb.jpg" alt="">
					
				</a>
				<div class="caption"><p>View of Greek Islands and the Gümüşlük Bay</p></div>
			</li>
			<li class="span3">
				<a href="assets/img/aerial-photo-gumusluk-2.jpg" class="thumbnail">
					<img src="assets/img/aerial-photo-gumusluk-2_thumb.jpg" alt="">
					

				</a>
				<div class="caption"><p>View of the Myndos Bed and Breakfast and beaches</p></div>
			</li>
			<li class="span3">
				<a href="assets/img/aerial-photo-gumusluk-3.jpg" class="thumbnail" >
					<img src="assets/img/aerial-photo-gumusluk-3_thumb.jpg" alt="">
				</a>
				<div class="caption"><p>View of the Gümüşlük beaches and restaurants</p></div>

			</li>
			<li class="span3">
				<a href="assets/img/aerial-photo-gumusluk-4.jpg" class="thumbnail">
					<img src="assets/img/aerial-photo-gumusluk-4_thumb.jpg" alt="">
				</a>
				<div class="caption">
					<p>Aereal view of the Gümüşlük Bay and Rabbit Island</p>
				</div>
			</li>
		</ul>
	</div>
</div>


<div class="row">
		<div class="span12">
		
		<iframe width="100%" height="650" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.com/maps?ie=UTF8&amp;cid=17542464132764460347&amp;q=Myndos+Bed+%26+Breakfast&amp;gl=US&amp;hl=en-US&amp;ll=37.05313,27.236856&amp;spn=0.006295,0.006295&amp;t=h&amp;iwloc=A&amp;output=embed"></iframe><br /><small><a href="https://maps.google.com/maps?ie=UTF8&amp;cid=17542464132764460347&amp;q=Myndos+Bed+%26+Breakfast&amp;gl=US&amp;hl=en-US&amp;ll=37.05313,27.236856&amp;spn=0.006295,0.006295&amp;t=h&amp;iwloc=A&amp;source=embed" style="color:#0000FF;text-align:left">View Larger Map</a></small>
		
		
		<? /*
		<iframe width="100%" height="550" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.com/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=37%C2%B0+3'11.21,++27%C2%B014'13.25+(Myndos+Bed+%26+Breakfast)&amp;aq=&amp;sll=37.053114,27.237014&amp;sspn=0.052608,0.077677&amp;t=h&amp;g=37%C2%B0+3'11.21,++27%C2%B014'13.25&amp;ie=UTF8&amp;ll=37.053114,27.237014&amp;spn=0.006576,0.00971&amp;z=14&amp;output=embed"></iframe><br /><small><a href="https://maps.google.com/maps?f=q&amp;source=embed&amp;hl=en&amp;geocode=&amp;q=37%C2%B0+3'11.21,++27%C2%B014'13.25+(Myndos+Bed+%26+Breakfast)&amp;aq=&amp;sll=37.053114,27.237014&amp;sspn=0.052608,0.077677&amp;t=h&amp;g=37%C2%B0+3'11.21,++27%C2%B014'13.25&amp;ie=UTF8&amp;ll=37.053114,27.237014&amp;spn=0.006576,0.00971&amp;z=14" style="color:#0000FF;text-align:left">View Larger Map</a></small>
		
		
		<iframe width="100%" height="400" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.com/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=G%C3%BCm%C3%BC%C5%9Fl%C3%BCk,+Turkey&amp;aq=0&amp;oq=Gumus&amp;sll=37.0625,-95.677068&amp;sspn=55.806079,76.289063&amp;t=h&amp;ie=UTF8&amp;hq=&amp;hnear=G%C3%BCm%C3%BC%C5%9Fl%C3%BCk,+Turkey&amp;ll=37.053943,27.239686&amp;spn=0.006953,0.009313&amp;z=14&amp;output=embed" style="padding-bottom:20px; padding-top:20px"></iframe>
		*/ ?>
	</div>
</div>
	
	


</div>



<? include('includes/footer.inc'); ?>