# PROYECTO FINAL

## El problema


## Comparativa de base de datos existentes:
Los principales motores de bases de datos que existen se dividen en dos campos:

### 1. SQL / Relacional:
El modelo relacional que utiliza tiene un esquema fijo que consiste en un conjunto de tablas, las cuales a la hora de la consulta de información se relacionan entre sí para dar con el resultado, esta operación de relación o transacción se le llame JOIN.

    · Lenguaje: SQL, lenguaje estructurado de consulta.

    · Velocidad: A medida que el volúmen de datos crece o en un entorno concurrente, el sistema se relentiza.

    · Datos: Prioriza la integridad de los datos porque no permite la redundancia de los mismos ya que los organiza en tablas.

    · Escalabilidad: no tiene la capacidad para incrementar o ajustar los recursos de acorde con las demandas del negocio, sin la necesidad de reestructurar significativamente el sistema, debido a su estructura rígida.

    · Ambientes de uso: Coorporativo o financiero, porque en este contexto es indispensable la integridad de los datos.

    · Más utilizados: Oracle, MySQL, Microsoft SQL Server, PostgreSQL, Maria DB.

### 2. No SQL / No Relacional:
Son más bien un conjunto de tipos de motores de bases de datos, sin embargo comparten entre sí estas características:
(Es todo lo contrario a SQL, es decir que niega todos sus principios.)

    · Lenguaje: No requiere una estructura fija y tabular, porque no utiliza un lenguaje de consulta estructurado, como SQL, como lenguaje principal.

    · Velocidad: El incremento del volumen de datos o un entorno concurrente no afecta el rendimiento del sistema.

    · Datos: Permite la redundancia de datos, lo que provoca la no consistencia a la hora de almacenar los mismos, pero eventualmente a la hora de consulta se garantiza obtener lo requerido.

    · Escalabilidad: tiene la capacidad para incrementar o ajustar los recursos de acorde con las demandas del negocio, debido a su flexibiilidad en los cambios de información en el sistema. 

    · Ambientes de uso: con alta demanda de usuarios como Facebook o Amazon, que exigen rapidez de respuesta así como de almacenamiento de los datos.

#### 2.1 Clave valor:
Simples en cuanto a su implementación, almacenan datos como un conjunto de pares “clave/valor” (key-value). La clave representa un identificador único que puede retornar un objeto complejo y arbitrario de información, denominado valor (valué). Por ejemplo, Redis y Amazon DynamoDB.

#### 2.2 Documental:
el concepto central de este tipo de almacenamiento es el documento. Una base de datos NoSQL documental, almacena, recupera y gestiona datos de documentos. Estos documentos encapsulan y codifican datos o información bajo algún formato estándar (XML, YAML, JSON, BSON). Por ejemplo, MongoDB y Apache CouchDB.

#### 2.3 Familia de Columnas:
Se encuentran organizados por columnas, en lugar de por filas. Las bases de datos que utilizan esta forma de almacenamiento tienden a ser un híbrido entre las clásicas bases de datos relaciónales y la tecnología orientada a columna. Por ejemplo, Cassandra y Apache HBase.

#### 2.4 Grafos:
Se representa la base de datos bajo el concepto de un grafo. Permite almacenar la información como nodos de un grafo y sus respectivas relaciones con otros nodos, y se aplica la teoría de grafos para recorrer la base de datos; son muy útiles para almacenar información en modelos con muchas relaciones entre distintas entidades o nodos. Por ejemplo, Neo4j y OrientDB.

Existen otros tipos de bases de datos SQL, sin embargo estás son las principales o más utilizadas.

Fuente: https://sedici.unlp.edu.ar/bitstream/handle/10915/91403/Documento_completo.pdf?sequence=1&isAllowed=y

Lo que diferencia el nuevo modelo de bases de datos propuesto con todas las bases de datos existentes es principalmente su sencillez y claridad.

    · Lenguaje: No requiere una estructura fija y tabular, porque no utiliza un lenguaje de consulta estructurado, como SQL, como lenguaje principal.

    · Velocidad: 

    · Datos: No permite la redundancia de datos en una misma fecha por lo que prioriza la integridad de los datos.

    · Escalabilidad: 

    · Ambientes de uso: específico para guardar eventos en una fecha determinada.

## Justificacion de este nuevo desarrollo
La implementación de este nuevo modelo de bases de datos es  

## Estructura de repositorio

## Descripcion de las funciones, estructuras

## Diagrama de flujos o Pseudocodigo. Debe estar embebido como imagen en le  README y dando una ligera explicacion de la imagen.

## Creditos
- Yannine Mary Saavedra Poma
- Camila Alison Catorceno Orellana

## Herramientas utilizadas
- VisualStudioCode
- Programiz C++
- Github