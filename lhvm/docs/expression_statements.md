# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="7"></a> 7 Expression Statements

These can be used as either [expression](expressions.md#12)

#### <a name="7.1"></a> 7.1 remove resource [constant](constants.md#10)

Removes an amount of resource from an [object](objects.md#8), and returns the
amount removed. If the amount asked for is greater than what is available than
the full amount available is taken.

`remove resource RESOURCE_TYPE_FOOD 20 from StoragePit`

#### <a name="7.2"></a> 7.2 add resource [constant](constants.md#10)

Adds an amount of resource to an [object](objects.md#8), and returns the amount
added. If the amount asked for is greater than the storage space left then the
remaining space only will be filled.

`add resource RESOURCE_TYPE_FOOD 20 to StoragePit`
