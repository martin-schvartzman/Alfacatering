<div class="categoria">
<div class="mensaje">
		<input  type="hidden" name="mensaje"/> 
</div> 
	
<div class="titulo">Editar Productos</div> 


<div class="menus">
    <ul class="menu">
		<?php foreach($cats as $c){ ?>
        <li><a href="/?cat=abmproductos&cgy=<?php echo $c->id; ?>" <?php if($c->id==$cat)echo 'class="actual"';?>><?php echo $c->nombre;?></a></li>
		<?php } ?>
    </ul>
    </div>
<br/><br/><br/>
<div class="menus2">
    <ul class="menu">
        <?php foreach($subs as $c){ ?>
        <li><a href="/?cat=abmproductos&cgy=<?php echo $cat; ?>&sub=<?php echo $c->id; ?>" <?php if($c->id==$sub)echo 'class="actual"';?>><?php echo $c->nombre;?></a></li>
		<?php } ?>
    </ul>
    </div>
<br/><br/><br/>
<div class="tablacat">
	<table >
	<?php $xyz=new destacados(); foreach($pros as $c){ ?>
	<tr>
		<td><?php if($xyz->isdestacadop($c->id))echo '<img style="height:22px;width:22px;" src="/views/images/star.jpg"/>'; ?></td>
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
		<td><form action="/?cat=amproducto" method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="hidden" name="cat" value="<?php echo $cat; ?>"/>
		<input type="hidden" name="sub" value="<?php echo $sub; ?>"/><input type="hidden" name="amproducto" value="edit" />
		<input type="submit" name="am" value="" style="background-image:url('/views/images/btn-modificar.jpg');"/></form></td>
	</tr>
	<?php } ?>
	
	
	<tr>
		<td ></td>
	</tr>
	<tr>
		<td ><form action="/?cat=amproducto" method="post">
		<input type="hidden" name="id" value="0"/>
		<input type="hidden" name="cat" value="<?php echo $cat; ?>"/>
		<input type="hidden" name="sub" value="<?php echo $sub; ?>"/><input type="hidden" name="amproducto" value="new" />
		<input type="submit" name="am" value="" style="background-image:url('/views/images/btn-nuevo.jpg');"/></form></td>
	</tr>
	</table>
		</div>

	
	
</div>