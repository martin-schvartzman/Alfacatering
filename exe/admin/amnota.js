$(document).ready(function (){
	$('#fotoarch').change(function(){
		$('#imgfotoarch').css("display","none");
	});
	
	$('[name|="fotoarchivo1"]').change(function(){
		$('#fotoarch1').css("display","block");
	});
	
	$('[name|="fotoarchivo2"]').change(function(){
		$('#fotoarch2').css("display","block");
	});
	
	$('[name|="fotoarchivo3"]').change(function(){
		$('#fotoarch3').css("display","block");
	});
	
	$('[name|="fotoarchivo4"]').change(function(){
		$('#fotoarch4').css("display","block");
	});
	
	$('[name|="fotoarchivo5"]').change(function(){
		$('#fotoarch5').css("display","block");
	});
	
	$('[name|="fotoarchivo6"]').change(function(){
		$('#fotoarch6').css("display","block");
	});
	
	$('[name|="fotoarchivo7"]').change(function(){
		$('#fotoarch7').css("display","block");
	});
	
	$('[name|="fotoarchivo8"]').change(function(){
		$('#fotoarch8').css("display","block");
	});
	
	$('[name|="fotoarchivo9"]').change(function(){
		$('#fotoarch9').css("display","block");
	});
	
	$('[name|="fotoarchivo10"]').change(function(){
		alert("Galeria completa");
	});
});