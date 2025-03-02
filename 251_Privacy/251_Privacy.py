def solution(today, terms, privacies):
    tYear, tMonth, tDay = map(int, today.split("."))
    answer = []
    for i in range(len(privacies)):
        target, type = privacies[i].split(" ")
        year, month, day = map(int, target.split("."))

        term = (tYear - year) * 12 * 28 + (tMonth - month) * 28 + (tDay - day)
        for j in range(len(terms)):
            tarType, tarTerm = terms[j].split(" ")
            if tarType == type:
                if term >= int(tarTerm) * 28:
                    answer.append(i + 1)
    return answer

print(solution("2022.05.19", ["A 6", "B 12", "C 3"],	["2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"]))