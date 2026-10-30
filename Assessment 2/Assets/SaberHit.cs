using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class SaberHit : MonoBehaviour
{
    [Header("Haptics Settings")]
    public ActionBasedController controller; // Drag your Right Controller here in the Inspector
    [Range(0f, 1f)] public float hapticAmplitude = 0.7f;
    public float hapticDuration = 0.15f;

    [Header("Audio Settings")]
    public AudioClip hitClip;              // Drag your slash/hit sound effect here
    private AudioSource audioSource;

    void Start()
    {
        // Automatically set up or get the AudioSource on the Saber
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("TargetCube"))
        {
            // 1. Trigger Controller Haptics (Rumble)
            if (controller != null)
            {
                controller.SendHapticImpulse(hapticAmplitude, hapticDuration);
            }

            // 2. Play Sound Effect
            if (hitClip != null && audioSource != null)
            {
                audioSource.PlayOneShot(hitClip);
            }

            // 3. Destroy the Target Cube
            Destroy(other.gameObject);
        }
    }
}