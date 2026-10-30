#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct BlockSpawner_t958E3FE0BD39AEC8B77FB9387CBD48464E9EA683;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct HapticControlActionManager_t69EE1EF49CBEC849C184D067624EC45D978E5480;
struct HapticImpulseSingleChannelGroup_t2C3B05E8445A863B629E78827F7206BC7E403A28;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
struct SaberHit_t076DC4B536662DA172612E034723CBBB5CF930CF;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
struct HapticImpulseChannel_t80F289E3894B24D7149F6C528A83326DC585B043;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8EFF8C93A9F4C14B21BFFD4C59426E779AB33440;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200_m36E69C38BC5C9799DF7A6B189285EB792C82B27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	String_t* ___heading;
	String_t* ___text;
	String_t* ___linkText;
	String_t* ___url;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	bool ___m_UseReference;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference;
};
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference;
};
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	float ___m_Value;
	bool ___m_Active;
	bool ___m_ActivatedThisFrame;
	bool ___m_DeactivatedThisFrame;
};
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value;
	int32_t ___m_Active;
	int32_t ___m_ActivatedThisFrame;
	int32_t ___m_DeactivatedThisFrame;
};
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value;
	int32_t ___m_Active;
	int32_t ___m_ActivatedThisFrame;
	int32_t ___m_DeactivatedThisFrame;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct UpdateType_tC4A820B292EBF2F240DB4AC578DA56EFB6D59F0E 
{
	int32_t ___value__;
};
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon;
	String_t* ___title;
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections;
	bool ___loadedLayout;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct BlockSpawner_t958E3FE0BD39AEC8B77FB9387CBD48464E9EA683  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cubePrefab;
	float ___spawnInterval;
	float ___timer;
};
struct CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	float ___speed;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition;
};
struct SaberHit_t076DC4B536662DA172612E034723CBBB5CF930CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___controller;
	float ___hapticAmplitude;
	float ___hapticDuration;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hitClip;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource;
};
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___m_UpdateTrackingType;
	bool ___m_EnableInputTracking;
	bool ___m_EnableInputActions;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model;
	bool ___m_AnimateModel;
	String_t* ___m_ModelSelectTransition;
	String_t* ___m_ModelDeSelectTransition;
	bool ___m_HideControllerModel;
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState;
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState;
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UIScrollValue;
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState;
	bool ___m_CreateControllerState;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator;
	bool ___m_HasWarnedAnimatorMissing;
	bool ___m_PerformSetup;
	HapticImpulseChannel_t80F289E3894B24D7149F6C528A83326DC585B043* ___m_HapticChannel;
	HapticImpulseSingleChannelGroup_t2C3B05E8445A863B629E78827F7206BC7E403A28* ___m_HapticChannelGroup;
};
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_IsTrackedAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIScrollAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_DirectionalAnchorRotationAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ScaleToggleAction;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ScaleDeltaAction;
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions;
	bool ___m_HasCheckedDisabledInputReferenceActions;
	HapticControlActionManager_t69EE1EF49CBEC849C184D067624EC45D978E5480* ___m_HapticControlActionManager;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawner_SpawnCube_m607A3CA8BC3FFA840C0E996258547CE32D8A4A69 (BlockSpawner_t958E3FE0BD39AEC8B77FB9387CBD48464E9EA683* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200* GameObject_AddComponent_TisCubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200_m36E69C38BC5C9799DF7A6B189285EB792C82B27A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 81664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawner_Update_mA997F8BEE078550069B3DD549BF1757C0D6C8B3C (BlockSpawner_t958E3FE0BD39AEC8B77FB9387CBD48464E9EA683* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:11>
		float L_0 = __this->___timer;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer = ((float)il2cpp_codegen_add(L_0, L_1));
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:12>
		float L_2 = __this->___timer;
		float L_3 = __this->___spawnInterval;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:14>
		BlockSpawner_SpawnCube_m607A3CA8BC3FFA840C0E996258547CE32D8A4A69(__this, NULL);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:15>
		__this->___timer = (0.0f);
	}

IL_0031:
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:17>
		return;
	}
}
// Method Definition Index: 81665
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawner_SpawnCube_m607A3CA8BC3FFA840C0E996258547CE32D8A4A69 (BlockSpawner_t958E3FE0BD39AEC8B77FB9387CBD48464E9EA683* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200_m36E69C38BC5C9799DF7A6B189285EB792C82B27A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EFF8C93A9F4C14B21BFFD4C59426E779AB33440);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:22>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:23>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		V_1 = L_5;
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:26>
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.5f), (0.5f), NULL);
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.200000003f), (0.400000006f), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_6, L_7, (0.0f), NULL);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:27>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (3.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_12, NULL);
		V_3 = L_13;
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:29>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___cubePrefab;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:30>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17;
		NullCheck(L_18);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_18, _stringLiteral8EFF8C93A9F4C14B21BFFD4C59426E779AB33440, NULL);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:33>
		NullCheck(L_18);
		CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200* L_19;
		L_19 = GameObject_AddComponent_TisCubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200_m36E69C38BC5C9799DF7A6B189285EB792C82B27A(L_18, GameObject_AddComponent_TisCubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200_m36E69C38BC5C9799DF7A6B189285EB792C82B27A_RuntimeMethod_var);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:34>
		CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200* L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		NullCheck(L_20);
		L_20->___targetPosition = L_21;
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:35>
		NullCheck(L_20);
		L_20->___speed = (1.5f);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:36>
		return;
	}
}
// Method Definition Index: 81666
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockSpawner__ctor_mCC5AB264D0DB7FF256FAA78F4979DAE608C6B7F4 (BlockSpawner_t958E3FE0BD39AEC8B77FB9387CBD48464E9EA683* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:6>
		__this->___spawnInterval = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 81667
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMover_Update_m1B51F27AABB6DCD0CA6EFF7755929035EF38D09A (CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:47>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___targetPosition;
		float L_4 = __this->___speed;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:50>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___targetPosition;
		float L_10;
		L_10 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_9, NULL);
		if ((!(((float)L_10) < ((float)(0.200000003f)))))
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:52>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
	}

IL_0055:
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:54>
		return;
	}
}
// Method Definition Index: 81668
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMover__ctor_mCF5CB95A89984B5F6B9B2E1DB5A76E39F8125BD1 (CubeMover_tB7DC9894EA7E9A9DA0E2CC2DDA99E2CC23E8E200* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/BlockSpawner.cs:41>
		__this->___speed = (1.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 81669
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaberHit_Start_m68E2C18F40F88CD25F2840ED25D8E70B4354670E (SaberHit_t076DC4B536662DA172612E034723CBBB5CF930CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:18>
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource), (void*)L_0);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:19>
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:21>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_3, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___audioSource = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource), (void*)L_4);
	}

IL_002b:
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:23>
		return;
	}
}
// Method Definition Index: 81670
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaberHit_OnTriggerEnter_m42C14896B5F2330953F462351CE5864B27A3F4C4 (SaberHit_t076DC4B536662DA172612E034723CBBB5CF930CF* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EFF8C93A9F4C14B21BFFD4C59426E779AB33440);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:27>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral8EFF8C93A9F4C14B21BFFD4C59426E779AB33440, NULL);
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:30>
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_2 = __this->___controller;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:32>
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_4 = __this->___controller;
		float L_5 = __this->___hapticAmplitude;
		float L_6 = __this->___hapticDuration;
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(18, L_4, L_5, L_6);
	}

IL_0033:
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:36>
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___hitClip;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audioSource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:38>
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___audioSource;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->___hitClip;
		NullCheck(L_12);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_12, L_13, NULL);
	}

IL_0060:
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:42>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14 = ___0_other;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
	}

IL_006b:
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:44>
		return;
	}
}
// Method Definition Index: 81671
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaberHit__ctor_m338CF24B0A6A67C5F93EF2F95034918BF524E334 (SaberHit_t076DC4B536662DA172612E034723CBBB5CF930CF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:8>
		__this->___hapticAmplitude = (0.699999988f);
		//<source_info:C:/Users/patri/Desktop/Assessment 2/Assessment 2/Assets/SaberHit.cs:9>
		__this->___hapticDuration = (0.150000006f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 81672
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 81673
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 42809
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:330>
		float L_0 = ___0_x;
		__this->___x = L_0;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:330>
		float L_1 = ___1_y;
		__this->___y = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:330>
		float L_2 = ___2_z;
		__this->___z = L_2;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:330>
		return;
	}
}
// Method Definition Index: 42849
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:786>
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_4, L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		(&V_0)->___z = ((float)il2cpp_codegen_multiply(L_7, L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 42846
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:777>
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_add(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_add(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		(&V_0)->___z = ((float)il2cpp_codegen_add(L_9, L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 42878
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Quaternion.cs:75>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		return L_0;
	}
}
// Method Definition Index: 42804
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:79>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:80>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:81>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:83>
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:85>
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_6 = (bool)G_B6_0;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:86>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_7 = L_24;
		goto IL_00ad;
	}

IL_0061:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:87>
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:90>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		(&V_5)->___x = ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31))));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:91>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		(&V_5)->___y = ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36))));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:92>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		(&V_5)->___z = ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41))));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:93>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_5;
		V_7 = L_42;
		goto IL_00ad;
	}

IL_00ad:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:94>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_7;
		return L_43;
	}
}
// Method Definition Index: 42829
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:598>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:599>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:600>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:601>
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector3.cs:602>
		float L_19 = V_3;
		return L_19;
	}
}
