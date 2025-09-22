# git-PSM
Repositorio con las prácticas de Rubén Benítez Ruiz de la asignatura PSM
1️⃣ Actualizar tu repositorio local con cambios del remoto
Paso 1: Traer cambios del remoto
git fetch origin


Esto descarga los commits del remoto, pero no los mezcla automáticamente en tu rama local.

Paso 2: Ver diferencias
git status
git log origin/main --oneline


git status te dice si tu rama local está detrás del remoto.

git log origin/main --oneline muestra los commits que están en remoto y que todavía no tienes localmente.

Paso 3: Integrar los cambios remotos
git merge origin/main


Esto aplica los cambios del remoto a tu rama local main.

Si hay conflictos, Git te pedirá que los resuelvas.

Alternativa más limpia: rebase

git pull --rebase origin main


Esto descarga los cambios del remoto y coloca tus commits locales encima, evitando commits de merge extra.

2️⃣ Subir cambios locales al remoto

Cada vez que hagas cambios en tu carpeta:

git add .
git commit -m "Mensaje descriptivo"
git push origin main


git add . → agrega todos los cambios al staging.

git commit -m "..." → guarda los cambios localmente.

git push origin main → sube los commits al remoto.

3️⃣ Descargar archivos específicos del remoto

Si solo quieres traer un archivo concreto que se subió al remoto:

git fetch origin
git checkout origin/main -- ruta/al/archivo.txt


Esto trae ese archivo del remoto sin afectar otros cambios locales.

4️⃣ Buenas prácticas

Antes de empezar a trabajar cada día:

git pull --rebase origin main


Esto asegura que siempre estés actualizado con lo que haya en el remoto.

Luego haces tus cambios y git push.
