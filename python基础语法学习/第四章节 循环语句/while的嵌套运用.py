# 外层循环时表白一百天
# 内层循环，每天的表白都送10只玫瑰花
i = 1
while i <= 100:
    print(f"今天是第{i}天，准备起飞")

    # 内层循环的变量要不一样
    j = 1
    while j <= 10:
        print(f"前进的挡位是：前进{j}")
        j += 1
    print("起飞成功")
    i += 1

print(f"坚持到第{i - 1}天，成为老司机")

# 空格缩进，觉得层次关系
# 注意条件的设置

# 层次越多越复杂 需要细心和耐心