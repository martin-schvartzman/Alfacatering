
<div class="categorias">
	<div class="mensaje">		<input  type="hidden" name=""/> 	</div>
	
	<div class="titulo">Productos Destacados</div> 
	
	<div class="listado">
	
		<div class="izq">
		<table>
		<?php $cur=1; foreach($prods as $p){ ?>
		<tr>
		<td>
		<form method="post">
		<input type="hidden" name="id" value="<?php echo $cur; $cur++;?>"/>
		<input type="submit" name="deletep" value="" 
		style="border:0px;height:22px;width:22px;background-image:url('/views/images/btn-eliminar.jpg');"/></form>
		
		</td>
		<td ><image src="/views/images/btn-bajar.jpg"/></td>
		<td ><image src="/views/images/btn-subir.jpg"/></td>
		<td class="notas"><div class="texto">  <?php echo $p->nombre; ?> </div><div class="fotonota"><!--<img class="fotochica" src="http://congenital-heart-defects.co.uk/images/atrialseptaldefect3.jpeg"> --></div> </td>
		</tr>
		<?php } ?>
		
		</table>
		</div>
		
		<div class="der"> 
			<div class="listacat"> CATEGORIA <br/><br/>
		<?php foreach($cats as $c){ ?>	
				<div><a href="/?cat=abmdestacados&cgy=<?php echo $c->id; ?>" <?php if($c->id==$cat)echo 'class="actual"';?>><?php echo $c->nombre;?></a></div>
		<?php } ?>
			</div>	
			<div class="listacat"> SUBCATEGORIA  <br/><br/>
			<?php foreach($subs as $c){ ?>
				<div><a href="/?cat=abmdestacados&cgy=<?php echo $cat; ?>&sub=<?php echo $c->id; ?>" <?php if($c->id==$sub)echo 'class="actual"';?>><?php echo $c->nombre;?></a></div>
				<?php } ?>
			</div>	
			<div class="listacat"> PRODUCTO  <br/><br/>
			<table>
				<?php 
				$x=new destacados();
				foreach($pros as $c){ 
				
				if(!$x->isdestacadop($c->id)){
				?>
	<tr>
		
		
		<td><div style="padding:20px;"><span class="texto" ><?php echo $c->nombre; ?></span></div> </td>
		<td><form action="/?cat=abmdestacados" method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="destacap" value="" style="border:0px;width:22px;height:22px;background-image:url('/views/images/btn-nuevo.jpg');"/></form></td>
	</tr>
	<?php }} ?></table>
			</div>	
		</div>	
	</div> 	
	
		
</div>
<!--<div class="pagina">&lt;&lt; &lt; 1 - 2 - 3 &gt; &gt;&gt;</div>-->
<div>
	<div>Noticias Destacadas</div>
	<div id="destacados">
	<table>
		<?php $cur=1; foreach($notis as $p){ ?>
		<tr>
		<td>
		<form method="post" action="#noticias">
		<input type="hidden" name="id" value="<?php echo $cur; $cur++;?>"/>
		<input type="submit" name="deleten" value="" 
		style="border:0px;height:22px;width:22px;background-image:url('/views/images/btn-eliminar.jpg');"/></form>
		
		</td>
		<td ><image src="/views/images/btn-bajar.jpg"/></td>
		<td ><image src="/views/images/btn-subir.jpg"/></td>
		<td class="notas"><div class="texto">  <?php echo $p->fecha; ?> - <?php echo $p->titulo; ?> </div><div class="fotonota"><!--<img class="fotochica" src="http://congenital-heart-defects.co.uk/images/atrialseptaldefect3.jpeg"> --></div> </td>
		</tr>
		<?php } ?>
		
		</table>
	</div>
	<h1 id="noticias">Noticias</h1>
	<div style="width:900px;height:500px;">
	
				<?php 
				$x=new destacados();
				foreach($nots as $c){ 
				
				if(!$x->isdestacadon($c->id)){
				?>
	<div style="float:left;border:1px solid black;width:675px;height:100px;margin-left: 20px;">
		
		
		<div style="padding:20px;"><span class="texto" ><?php echo $c->titulo; ?></span></div> 
		<form action="/?cat=abmdestacados#noticias" method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="destacan" value="" style="float: right;margin-right: 60px;border:0px;width:22px;height:22px;background-image:url('/views/images/btn-nuevo.jpg');"/></form>
	</div>
	<?php }} ?>
	</div>
</div>




