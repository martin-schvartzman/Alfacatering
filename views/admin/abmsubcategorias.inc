<br/>
<div class="categorias">

	<div class="mensaje">
		<input  type="hidden" name="mensaje"/> 
	</div> 
<div class="titulo">Editar Subcategoria</div>	
<div class="descripsubcat">	Descripción Sub Categoría 	</div> 
<div class="menus">
    <ul class="menu">
	<?php 
$first=true;
foreach($cats as $c){
 ?>
        <li><a href="/?cat=abmsubcategorias&procat=<?php echo $c->id; ?>"<?php 
	if($first && $procat==0) echo ' class="actual" ';
	else if($c->id == $procat)echo ' class="actual" ';
	?>><?php echo $c->nombre; ?></a></li>

<?php $first=false;} ?>
    </ul>
    </div>
<br/>
	
<div class="tablacat">
	<table >
	
	
	
<?php foreach($subs as $c){ ?>
	<tr>
		<td ><form method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="bajar" value="" style="background-image:url('/views/images/btn-bajar.jpg');"/></form></td>
		<td ><form method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="subir" value="" style="background-image:url('/views/images/btn-subir.jpg');"/></form></td>
		<td><div style="padding:20px;"><span class="texto" ><?php echo $c->nombre; ?></span></div> </td>
		<td><form method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="delete" value="" style="background-image:url('/views/images/btn-eliminar.jpg');"/></form></td>
		<td><form action="/?cat=amsubcategoria" method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/><input type="hidden" name="cat" value="<?php echo $c->categoria; ?>"/>
		<input type="submit" name="amcategoria" value="" style="background-image:url('/views/images/btn-modificar.jpg');"/></form></td>
	</tr>
	<?php } ?>
	
	
	
	
	<tr>
		<td ></td>
	</tr>
	<tr>
		<td ><form action="/?cat=amsubcategoria" method="post">
		<input type="hidden" name="id" value="0"/><input type="hidden" name="cat" value="<?php echo $cat; ?>"/>
		<input type="submit" name="amcategoria" value="" style="background-image:url('/views/images/btn-nuevo.jpg');"/></form></td>
	</tr>
	</table>
		</div>
</div>