using UnityEngine;

public class BlockSpawner : MonoBehaviour
{
    public GameObject cubePrefab;
    public float spawnInterval = 2.0f;
    private float timer;

    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= spawnInterval)
        {
            SpawnCube();
            timer = 0f;
        }
    }

    void SpawnCube()
    {
        // 1. Get current headset position and forward direction
        Vector3 headPos = Camera.main.transform.position;
        Vector3 headForward = Camera.main.transform.forward;

        // 2. Spawn 3 meters ahead of your face, with a slight random spread
        Vector3 randomOffset = new Vector3(Random.Range(-0.5f, 0.5f), Random.Range(-0.2f, 0.4f), 0f);
        Vector3 spawnPos = headPos + (headForward * 3.0f) + randomOffset;

        GameObject cube = Instantiate(cubePrefab, spawnPos, Quaternion.identity);
        cube.tag = "TargetCube";

        // 3. Attach mover script and tell it to move directly toward the headset position
        CubeMover mover = cube.AddComponent<CubeMover>();
        mover.targetPosition = headPos;
        mover.speed = 1.5f;
    }
}

public class CubeMover : MonoBehaviour
{
    public float speed = 1.5f;
    public Vector3 targetPosition;

    void Update()
    {
        // Move smoothly toward the player's head position
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, speed * Time.deltaTime);

        // Destroy if it reaches the player or passes them
        if (Vector3.Distance(transform.position, targetPosition) < 0.2f)
        {
            Destroy(gameObject);
        }
    }
}