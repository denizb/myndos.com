<?
$page['title'] = "Reservations";
$page['class'] = "reservations"; 

?>
<? include('includes/header.inc'); ?>

<div class="section banner">
	<div class="flexslider">
		<ul class="slides">
			<li><img src="assets/img/banner-rooms-1.jpg" width="940" /></li>
		</ul>
	</div>
</div>


<div class="row main">
	<div class="span8">
	
		<h2><?=getLocalString('Reservations')?></h2>
		
		<p><?=getLocalString('rates1')?></p>
		
		<h5><?=getLocalString('rates-period1')?></h5>
		<ul>
			<li><?=getLocalString('rates-description')?>: 140 TL</li>
		</ul>
		
		<h5><?=getLocalString('rates-period2')?></h5>
		<ul>
			<li><?=getLocalString('rates-description')?>: 180 TL</li>
		</ul>

		<h5><?=getLocalString('rates-period3')?></h5>
		<ul>
			<li><?=getLocalString('rates-description')?>: 210 TL</li>
		</ul>
		<h5><?=getLocalString('rates-period4')?></h5>
		<ul>
			<li><?=getLocalString('rates-description')?>: 140 TL</li>
		</ul>
		<br>
		<small>* <?=getLocalString('rates-extra-bed')?></small>
		<!-- Specials -->

		<hr>
	
	
		<h2><?=getLocalString('Contact Us')?></h2>
		
		
		
				
		<!--<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras gravida posuere vehicula. Nulla aliquam condimentum lorem, vitae scelerisque justo mattis vel. Aliquam iaculis porttitor eleifend. Suspendisse vehicula sodales arcu a venenatis. In egestas justo vitae nisl venenatis porttitor. In hac habitasse platea dictumst. Vivamus vitae turpis ligula. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.</p>-->
			
	<form class="well" action="<?=$_SERVER['PHP_SELF']?>" method="post" id="contactform">
	  <div class="control-group">
	  	<label for="fullname"><?=getLocalString('Your Name')?></label>
	  	<input type="text" class="span7" id="fullname" name="fullname" placeholder="Type Your Name…">
	  	<span class="help-block">Please enter your name</span>
	  </div>
	  
	  <div class="control-group">
	  	<label for="email"><?=getLocalString('Your Email')?></label>
	  	<input type="text" class="span7" id="email" name="email" placeholder="Type Your Email…">
	  	<span class="help-block">Please enter your email</span>
	  </div>
	  
	  <div class="control-group">
	 	<label for="phone"><?=getLocalString('Phone')?></label>
	 	<input type="text" class="span7" id="phone" name="phone">
	 	<span class="help-block">Please enter your telephone number</span>
	  </div>

	  <div class="control-group">
	  	<label for="message"><?=getLocalString('Your Message')?></label>
	  	<textarea name="message" id="message" class="span7" rows="10" placeholder="Type your message…"></textarea>
	  	<span class="help-block">Please enter your message</span>
	  </div> 
	  
	  <button type="submit" id="send" class="btn"><?=getLocalString('Send')?></button>
	</form>
	
	<div id="formResponse" style="display:none;">
		<div class="alert alert-success">
    		<?=getLocalString("Message Sent")?>
    	</div>
	</div>

	</div>
	
	<div class="span4">
		<div class="sidebar">
			<h3><?=getLocalString('Address');?></h3>

			<p>Gümüşlük Yalısı<br />Gümüşlük, Bodrum<br /> Türkiye</p>

			<p>+90 252 394 3945</p>
			<p>+90 532 293 6267</p>
			<p><SCRIPT TYPE="text/javascript">
				<!-- 
				e=('bedandbreakfast@' + 'myndos.com')
				document.write('<a href="mailto:' + e + '">' + e + '</a>')
				 //-->
			   </script></p>
			   
		</div>
		<div style="padding:20px">
		<div class="fb-like" data-href="https://www.facebook.com/MyndosBedAndBreakfast" data-send="true" data-width="250" data-show-faces="true" data-font="lucida grande"></div>
		</div>
				
	</div>


</div>

<script type="text/javascript">


	
$(function() {
	
	$('.help-block').hide();
	
	$("#send").click(function(){					   				   
		
		$('.control-group').removeClass( 'error' );
		
		
		var hasError = false;
		var emailReg = /^([\w-\.]+@([\w-]+\.)+[\w-]{2,4})?$/;
		
		var nameVal = $("#fullname").val();
		if(nameVal == '') {
			$("#fullname").parent('.control-group').addClass( 'error' );
			$("#fullname").siblings('.help-block').show();
			hasError = true;
		}
		
		var emailVal = $("#email").val();
		if(emailVal == '') {
			$("#email").parent('.control-group').addClass( 'error' );
			$("#email").siblings('.help-block').show();
			hasError = true;
		} else if(!emailReg.test(emailVal)) {	
			$("#email").parent('.control-group').addClass( 'error' );
			$("#email").siblings('.help-block').show();
			hasError = true;
		}
				
		var messageVal = $("#message").val();
		if(messageVal == '') {
			$("#message").parent('.control-group').addClass( 'error' );
			$("#message").siblings('.help-block').show();
			hasError = true;
		}
		
		var phoneVal = $("#phone").val();
		
		if(hasError == false) {
			$(this).hide();
			
			$.post("sendmail.php",
   				{ fullname: nameVal, email: emailVal, phone: phoneVal, message: messageVal },
   					function(data){
	
						$("#contactform").slideUp("slow");
						$("#formResponse").fadeIn("slow");
										
                                       
   					}
				 );
		}
		
		return false;
	});						   	
		
});
	
	
	
</script>


<? include('includes/footer.inc'); ?>