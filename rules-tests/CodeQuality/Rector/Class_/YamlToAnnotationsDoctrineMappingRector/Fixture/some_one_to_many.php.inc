<?php

namespace Rector\Doctrine\Tests\CodeQuality\Rector\Class_\YamlToAnnotationsDoctrineMappingRector\Fixture;

final class SomeOneToMany
{
    private $singleItem;
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\CodeQuality\Rector\Class_\YamlToAnnotationsDoctrineMappingRector\Fixture;

/**
 * @\Doctrine\ORM\Mapping\Table
 */
final class SomeOneToMany
{
    /**
     * @\Doctrine\ORM\Mapping\OneToMany(targetEntity="App\Entity\Item", mappedBy="itemIds", cascade={"persist"})
     */
    private $singleItem;
}

?>
