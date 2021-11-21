import decimal
print(decimal.Decimal(input()).quantize(decimal.Decimal('1'), rounding=decimal.ROUND_HALF_UP))
