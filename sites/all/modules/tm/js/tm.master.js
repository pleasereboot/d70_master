(function($) { $( document ).ready(function() {


	$("#main-menu li").hover(function(){
		$(this).css('cursor', 'pointer');
	});	

	$("#main-menu li").click(function(){
		window.location = $(this).find('a:first').attr('href');
	});


	
});})(jQuery);