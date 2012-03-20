<div id="container">
  <div class="header" id="header">
		<a href="/"><div class="isologo"></div></a>
		<div class="divmenu">
		<ul id="menu">
		<li style="height:20px;" <?php if($category=="home")echo ' class="selected" '; ?>><a href="/">ALFA</a></li>
		<?php //var_dump($catsub); ?>
		<?php foreach($catsub as $c){ ?>
		<li  style="height:20px;"  <?php if($category=="subcategoria" || $category=="producto")echo ' class="selected" '; ?>>
		<font id="catego"><?php echo $c["cat"]->nombre; ?></font>
		<ul>
			<?php foreach ($c["sub"] as $s){ ?>
			<li>
			<div class="subcategoria">
				<a 
				<?php if($s->contar() == "1"){$p=$s->first(); ?>
				href="/?cat=producto&id=<?php echo $p->id; ?>"
				<?php }else{ ?>
				href="/?cat=subcategoria&pag=1&id=<?php echo $s->id; ?>"
				<?php } ?>
				>
					<?php echo $s->nombre; ?>
				</a>
			</div>
			</li>
			<?php } ?>
		</ul>
		</li>
		<?php } ?>
		<li style="height:20px;" <?php if($category=="nota")echo ' class="selected" '; ?>><a href="/?cat=indicenotas">NOTAS</a></li>
		<li style="height:20px;" <?php if($category=="contacto")echo ' class="selected" '; ?>><a href="/?cat=contacto">CONTACTO</a></li>
		</ul>
		</div>
	</div>


<div class="contenido" id="contenido">
<?php  include($diseno); ?>
</div>
  
  
<div class="footer" id="footer">
  	<div class="textofooter">ALFA CATERING - info@alfacatering.com.ar - Telefonos:15-5972-1842,15-3046-9111</div>
	<div class="logos">
	<a href="http://listado.mercadolibre.com.ar/alfa-catering-servicio-de-lunch" target="_blank"><img src="/views/images/ml_logo.jpg" alt="Mercado Libre" width="51" height="28" border="0" /></a>
	<a href="http://www.facebook.com/alfacatering?ref=ts" target="_blank"><img src="/views/images/fb_logo.jpg" alt="Facebook" width="27" height="28" border="0" /></a>
    </div>
</div>
    
</div>