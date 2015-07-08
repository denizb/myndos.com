
</div>


	<div class="footer">
		<div class="footer-container">
		<div class="row">
			
			<div class="span8">
				<div style="overflow: hidden">
				<p class="sitemap" style="display: block; float:left">
					<a href="/<?=$lang?>/index.php"><?=getLocalString('Home')?></a> 
					<a href="/<?=$lang?>/rooms.php?lang=<?=$lang?>"><?=getLocalString('Accommodations')?></a> 
					<!--<a href="#">Actvities</a> |--> 
					<a href="/<?=$lang?>/map.php?lang=<?=$lang?>"><?=getLocalString('Map')?></a> 
					<a href="/<?=$lang?>/reservations.php?lang=<?=$lang?>"><?=getLocalString('Reservations')?></a>
					
				</p>
				
				<p style="display: block; float: right">
					<a href="http://www.lodgit-hotel-software.com" target="_blank" ><img title="We use Lodgit Desk hotel software!" alt="We use Lodgit Desk hotel software!" src="http://www.lodgit-hotel-software.com/files/lodgit/Reviews/lodgit100x60_en.png" style="height: 40px" /></a>	

				</p>	
				</div>	
				
				<p class="address">
					Gümüşlük Yalısı, Gümüşlük, Bodrum, Türkiye
				</p>
				<p class="address">
					+90 252 394 3945 | +90 532 293 6267 | <SCRIPT TYPE="text/javascript">
						<!-- 
						e=('bedandbreakfast@' + 'myndos.com')
						document.write('<A href="mailto:' + e + '">' + e + '</a>')
						 //-->
					   </script>
				</p>
			</div>
			
			<div class="span4" style="text-align: right">
			<div style="background: #fff; padding: 5px; width: 100%">
			<iframe src="//www.facebook.com/plugins/like.php?href=https%3A%2F%2Fwww.facebook.com%2FMyndosBedAndBreakfast&amp;width=280&amp;layout=standard&amp;action=like&amp;show_faces=true&amp;share=true&amp;height=60" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:300px; height:80px;" allowTransparency="true"></iframe>
			</div>
				
			</div>
			
		</div>
		</div>
	</div>

<script type="text/javascript" charset="utf-8">
  
  	$(function(){
   	
   		$('.flexslider').flexslider({
   			controlNav: false
   		});
   		/*
   		$( "#from-date" ).datepicker({
			defaultDate: "+1w",
			changeMonth: true,
			numberOfMonths: 2,
			onSelect: function( selectedDate ) {
				$( "#to-date" ).datepicker( "option", "minDate", selectedDate );
			}
		});
		$( "#to-date" ).datepicker({
			defaultDate: "+1w",
			changeMonth: true,
			numberOfMonths: 2,
			onSelect: function( selectedDate ) {
				$( "#from-date" ).datepicker( "option", "maxDate", selectedDate );
			}
		});
		*/
		$('a.thumbnail').lightBox();
		$('a.lightbox').lightBox();
   		
   	});

</script>



<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-32714016-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>

</body>
</html>