int solution(int X, int Y, int D) {
    return (Y - X) / D + int((Y - X) % D > 0);
}