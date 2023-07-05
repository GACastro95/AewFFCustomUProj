// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELVictoryCutsceneManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELVictoryCutsceneManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELVictoryCutsceneManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELVictoryCutsceneManager();
	ABP_200508_API UClass* Z_Construct_UClass_AELVictoryCutsceneManagerCore();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EStickinputDir();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam();
// End Cross Module References
	DEFINE_FUNCTION(AELVictoryCutsceneManager::execOnDamageHPEvent)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_AtkPlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageHead);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageArm);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageBody);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageLeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageHPEvent(Z_Param_AtkPlayer,Z_Param_DamageHead,Z_Param_DamageArm,Z_Param_DamageBody,Z_Param_DamageLeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManager::execOnPlayNormalTauntEvent)
	{
		P_GET_ENUM(EStickinputDir,Z_Param_InputDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayNormalTauntEvent(EStickinputDir(Z_Param_InputDir));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManager::execOnTakeControlBtn)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_AtkPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeControlBtn(Z_Param_AtkPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManager::execSetAtomComponent)
	{
		P_GET_OBJECT(UAtomComponent,Z_Param__AtomComponent);
		P_GET_OBJECT(AActor,Z_Param__RAManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtomComponent(Z_Param__AtomComponent,Z_Param__RAManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManager::execSetupPlayer)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPlayer(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELVictoryCutsceneManager::execStartObserveBreakOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartObserveBreakOut();
		P_NATIVE_END;
	}
	static FName NAME_AELVictoryCutsceneManager_OnCancelTimerEvent = FName(TEXT("OnCancelTimerEvent"));
	void AELVictoryCutsceneManager::OnCancelTimerEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_OnCancelTimerEvent),NULL);
	}
	static FName NAME_AELVictoryCutsceneManager_OnEndInteractiveWinscene = FName(TEXT("OnEndInteractiveWinscene"));
	void AELVictoryCutsceneManager::OnEndInteractiveWinscene()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_OnEndInteractiveWinscene),NULL);
	}
	static FName NAME_AELVictoryCutsceneManager_OnEndSpecialScene = FName(TEXT("OnEndSpecialScene"));
	void AELVictoryCutsceneManager::OnEndSpecialScene()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_OnEndSpecialScene),NULL);
	}
	static FName NAME_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance = FName(TEXT("OnFinishedEvent_EnterEntrance"));
	void AELVictoryCutsceneManager::OnFinishedEvent_EnterEntrance(AELCharacter_Native* EnterPlayer)
	{
		ELVictoryCutsceneManager_eventOnFinishedEvent_EnterEntrance_Parms Parms;
		Parms.EnterPlayer=EnterPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance),&Parms);
	}
	static FName NAME_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage = FName(TEXT("OnFinishedEvent_OverDamage"));
	void AELVictoryCutsceneManager::OnFinishedEvent_OverDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage),NULL);
	}
	static FName NAME_AELVictoryCutsceneManager_OnFinishedEvent_Taunt = FName(TEXT("OnFinishedEvent_Taunt"));
	void AELVictoryCutsceneManager::OnFinishedEvent_Taunt()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_OnFinishedEvent_Taunt),NULL);
	}
	static FName NAME_AELVictoryCutsceneManager_SceneCapture_Impl = FName(TEXT("SceneCapture_Impl"));
	void AELVictoryCutsceneManager::SceneCapture_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_SceneCapture_Impl),NULL);
	}
	static FName NAME_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl = FName(TEXT("SceneCaptureWithTransform_Impl"));
	void AELVictoryCutsceneManager::SceneCaptureWithTransform_Impl(FTransform Transform)
	{
		ELVictoryCutsceneManager_eventSceneCaptureWithTransform_Impl_Parms Parms;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl),&Parms);
	}
	static FName NAME_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl = FName(TEXT("SetCameraLocationAndRotation_Impl"));
	void AELVictoryCutsceneManager::SetCameraLocationAndRotation_Impl(FVector Location, FRotator Rotation)
	{
		ELVictoryCutsceneManager_eventSetCameraLocationAndRotation_Impl_Parms Parms;
		Parms.Location=Location;
		Parms.Rotation=Rotation;
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl),&Parms);
	}
	static FName NAME_AELVictoryCutsceneManager_StartInteractiveWinscene = FName(TEXT("StartInteractiveWinscene"));
	void AELVictoryCutsceneManager::StartInteractiveWinscene()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_StartInteractiveWinscene),NULL);
	}
	static FName NAME_AELVictoryCutsceneManager_StartSpecialScene = FName(TEXT("StartSpecialScene"));
	void AELVictoryCutsceneManager::StartSpecialScene(FELInteractiveVictoryCutsceneSpecialSceneParam const& SpecialSceneParam)
	{
		ELVictoryCutsceneManager_eventStartSpecialScene_Parms Parms;
		Parms.SpecialSceneParam=SpecialSceneParam;
		ProcessEvent(FindFunctionChecked(NAME_AELVictoryCutsceneManager_StartSpecialScene),&Parms);
	}
	void AELVictoryCutsceneManager::StaticRegisterNativesAELVictoryCutsceneManager()
	{
		UClass* Class = AELVictoryCutsceneManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamageHPEvent", &AELVictoryCutsceneManager::execOnDamageHPEvent },
			{ "OnPlayNormalTauntEvent", &AELVictoryCutsceneManager::execOnPlayNormalTauntEvent },
			{ "OnTakeControlBtn", &AELVictoryCutsceneManager::execOnTakeControlBtn },
			{ "SetAtomComponent", &AELVictoryCutsceneManager::execSetAtomComponent },
			{ "SetupPlayer", &AELVictoryCutsceneManager::execSetupPlayer },
			{ "StartObserveBreakOut", &AELVictoryCutsceneManager::execStartObserveBreakOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnCancelTimerEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics
	{
		struct ELVictoryCutsceneManager_eventOnDamageHPEvent_Parms
		{
			const AELCharacter_Native* AtkPlayer;
			float DamageHead;
			float DamageArm;
			float DamageBody;
			float DamageLeg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtkPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtkPlayer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageHead;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageArm;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageBody;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageLeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_AtkPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_AtkPlayer = { "AtkPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnDamageHPEvent_Parms, AtkPlayer), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_AtkPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_AtkPlayer_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageHead = { "DamageHead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnDamageHPEvent_Parms, DamageHead), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageArm = { "DamageArm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnDamageHPEvent_Parms, DamageArm), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageBody = { "DamageBody", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnDamageHPEvent_Parms, DamageBody), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageLeg = { "DamageLeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnDamageHPEvent_Parms, DamageLeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_AtkPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::NewProp_DamageLeg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnDamageHPEvent", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventOnDamageHPEvent_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnEndInteractiveWinscene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnEndSpecialScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::NewProp_EnterPlayer = { "EnterPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnFinishedEvent_EnterEntrance_Parms, EnterPlayer), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::NewProp_EnterPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnFinishedEvent_EnterEntrance", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventOnFinishedEvent_EnterEntrance_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnFinishedEvent_OverDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnFinishedEvent_Taunt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics
	{
		struct ELVictoryCutsceneManager_eventOnPlayNormalTauntEvent_Parms
		{
			EStickinputDir InputDir;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::NewProp_InputDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnPlayNormalTauntEvent_Parms, InputDir), Z_Construct_UEnum_ELITE_Game_EStickinputDir, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::NewProp_InputDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::NewProp_InputDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnPlayNormalTauntEvent", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventOnPlayNormalTauntEvent_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics
	{
		struct ELVictoryCutsceneManager_eventOnTakeControlBtn_Parms
		{
			const AELCharacter_Native* AtkPlayer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtkPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtkPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::NewProp_AtkPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::NewProp_AtkPlayer = { "AtkPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventOnTakeControlBtn_Parms, AtkPlayer), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::NewProp_AtkPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::NewProp_AtkPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::NewProp_AtkPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "OnTakeControlBtn", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventOnTakeControlBtn_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "SceneCapture_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventSceneCaptureWithTransform_Impl_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "SceneCaptureWithTransform_Impl", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventSceneCaptureWithTransform_Impl_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics
	{
		struct ELVictoryCutsceneManager_eventSetAtomComponent_Parms
		{
			UAtomComponent* _AtomComponent;
			AActor* _RAManager;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__AtomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__AtomComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__RAManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::NewProp__AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::NewProp__AtomComponent = { "_AtomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventSetAtomComponent_Parms, _AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::NewProp__AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::NewProp__AtomComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::NewProp__RAManager = { "_RAManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventSetAtomComponent_Parms, _RAManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::NewProp__AtomComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::NewProp__RAManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "SetAtomComponent", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventSetAtomComponent_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventSetCameraLocationAndRotation_Impl_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventSetCameraLocationAndRotation_Impl_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "SetCameraLocationAndRotation_Impl", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventSetCameraLocationAndRotation_Impl_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics
	{
		struct ELVictoryCutsceneManager_eventSetupPlayer_Parms
		{
			AELCharacter_Native* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventSetupPlayer_Parms, Character), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "SetupPlayer", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventSetupPlayer_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "StartInteractiveWinscene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "StartObserveBreakOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialSceneParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecialSceneParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::NewProp_SpecialSceneParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::NewProp_SpecialSceneParam = { "SpecialSceneParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELVictoryCutsceneManager_eventStartSpecialScene_Parms, SpecialSceneParam), Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::NewProp_SpecialSceneParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::NewProp_SpecialSceneParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::NewProp_SpecialSceneParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELVictoryCutsceneManager, nullptr, "StartSpecialScene", nullptr, nullptr, sizeof(ELVictoryCutsceneManager_eventStartSpecialScene_Parms), Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELVictoryCutsceneManager_NoRegister()
	{
		return AELVictoryCutsceneManager::StaticClass();
	}
	struct Z_Construct_UClass_AELVictoryCutsceneManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELVictoryCutsceneManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELVictoryCutsceneManagerCore,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELVictoryCutsceneManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnCancelTimerEvent, "OnCancelTimerEvent" }, // 258811724
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnDamageHPEvent, "OnDamageHPEvent" }, // 908649612
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndInteractiveWinscene, "OnEndInteractiveWinscene" }, // 650291858
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnEndSpecialScene, "OnEndSpecialScene" }, // 1901034894
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_EnterEntrance, "OnFinishedEvent_EnterEntrance" }, // 3664167230
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_OverDamage, "OnFinishedEvent_OverDamage" }, // 2875389008
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnFinishedEvent_Taunt, "OnFinishedEvent_Taunt" }, // 1440182023
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnPlayNormalTauntEvent, "OnPlayNormalTauntEvent" }, // 3279981705
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_OnTakeControlBtn, "OnTakeControlBtn" }, // 2037274245
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCapture_Impl, "SceneCapture_Impl" }, // 104833812
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_SceneCaptureWithTransform_Impl, "SceneCaptureWithTransform_Impl" }, // 3639935717
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_SetAtomComponent, "SetAtomComponent" }, // 1671396204
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_SetCameraLocationAndRotation_Impl, "SetCameraLocationAndRotation_Impl" }, // 2973504324
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_SetupPlayer, "SetupPlayer" }, // 3929204943
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_StartInteractiveWinscene, "StartInteractiveWinscene" }, // 192872382
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_StartObserveBreakOut, "StartObserveBreakOut" }, // 3017852038
		{ &Z_Construct_UFunction_AELVictoryCutsceneManager_StartSpecialScene, "StartSpecialScene" }, // 1599941432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELVictoryCutsceneManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELVictoryCutsceneManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELVictoryCutsceneManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELVictoryCutsceneManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELVictoryCutsceneManager_Statics::ClassParams = {
		&AELVictoryCutsceneManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELVictoryCutsceneManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELVictoryCutsceneManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELVictoryCutsceneManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELVictoryCutsceneManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELVictoryCutsceneManager, 2243897911);
	template<> ABP_200508_API UClass* StaticClass<AELVictoryCutsceneManager>()
	{
		return AELVictoryCutsceneManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELVictoryCutsceneManager(Z_Construct_UClass_AELVictoryCutsceneManager, &AELVictoryCutsceneManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELVictoryCutsceneManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELVictoryCutsceneManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
