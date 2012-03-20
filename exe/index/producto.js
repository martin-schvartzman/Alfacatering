$(document).ready(function (){
	var cur=0;
	var next="none";
	var prev="none";
	$(".galeria img").click(function (){
		$("#jqgallery").css("display","block");
		var img=$(this).attr("src");
		var index=$(this).attr("index");
		cur=index;
		prev=$('img[index="'+(parseInt(index)-1)+'"]').attr("src");
		next=$('img[index="'+(parseInt(index)+1)+'"]').attr("src");
		$("#fotoframe").css("background-image","url('" + img + "')");
		//alert(prev);alert(cur);alert(next);
	});
	
	$("#closejq").click(function (){
		$("#jqgallery").css("display","none");
	});
	
	$("#fotoright").click(function (){
	//alert(next);
	if(next != undefined){
		cur++;
		var index=cur;
		$("#fotoframe").css("background-image","url('" + next + "')");
		prev=$('img[index="'+(parseInt(index)-1)+'"]').attr("src");
		next=$('img[index="'+(parseInt(index)+1)+'"]').attr("src");
	}
	});
	
	$("#fotoleft").click(function (){
	//alert(prev);
	if(prev != undefined){
		cur--;
		var index=cur;
		$("#fotoframe").css("background-image","url('" + prev + "')");
		prev=$('img[index="'+(parseInt(index)-1)+'"]').attr("src");
		next=$('img[index="'+(parseInt(index)+1)+'"]').attr("src");
	}
	});
});