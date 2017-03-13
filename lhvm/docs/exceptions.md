# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="4"></a> 4 Exceptions

Exceptions let you break out of a code block as soon as something happens, rather than checking something only at the beginning or end of a code block. Most often used with loops.

#### <a name="4.1"></a> 4.1 avoid_when [condition](conditions.md#6) [statements](statements.md#3)

This hasn't been used for a long time, and may not work.

#### <a name="4.2"></a> 4.2 until [condition](conditions.md) [statements](statements.md#3)

Repeatedly checks the [condition](conditions.md#6), which upon success processes a number of [statements](Statements.htm#3). Often used before an end loop statement as the [exception](exceptions.md#4) for the loop.

```
until HEALTH of MyVillager == 0
end loop
```
