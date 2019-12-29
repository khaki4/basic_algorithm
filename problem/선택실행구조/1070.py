a = int(input())

def lookup(x):
    winter = 'winter'
    spring = 'spring'
    summer = 'summer'
    fall = 'fall'
    table = {
        12: winter,
        1: winter,
        2: winter,
        3: spring,
        4: spring,
        5: spring,
        6: summer,
        7: summer,
        8: summer,
        9: fall,
        10: fall,
        11: fall
    }
    
    print(table.get(x)) 

lookup(a)