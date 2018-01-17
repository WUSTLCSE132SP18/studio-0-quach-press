
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double time = 0;
		while (true) {
			try {
				Thread.sleep(1000);
			} catch (Exception e) {
				e.printStackTrace();
			}
			time += 1000;
			System.out.println(time);
		}
	}
}
