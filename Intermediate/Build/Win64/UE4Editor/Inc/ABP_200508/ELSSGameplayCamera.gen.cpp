// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameplayCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameplayCamera() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameplayCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameplayCamera();
	ELITE_GAME_API UClass* Z_Construct_UClass_AGameplayCamera();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionCameraID();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraShakeType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraShake_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionCameraController_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraPosition();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraParamManager_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraMode();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraStateControlParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AELSSGameplayCamera::execEndActionCamera)
	{
		P_GET_ENUM(ESSActionCameraID,Z_Param_inActionCameraID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndActionCamera(ESSActionCameraID(Z_Param_inActionCameraID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execForceEndActionCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceEndActionCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execGetCameraShake)
	{
		P_GET_ENUM(ESSCameraShakeType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UELSSCameraShake> *)Z_Param__Result=P_THIS->GetCameraShake(ESSCameraShakeType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execIsPlayingActionCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingActionCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execOnJumped)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJumped(Z_Param_inPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execOnLanded)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLanded(Z_Param_inPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execPlayActionCamera)
	{
		P_GET_ENUM(ESSActionCameraID,Z_Param_inActionCameraID);
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSActionCameraController**)Z_Param__Result=P_THIS->PlayActionCamera(ESSActionCameraID(Z_Param_inActionCameraID),Z_Param_inPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execProgressActionCamera)
	{
		P_GET_ENUM(ESSActionCameraID,Z_Param_inActionCameraID);
		P_GET_PROPERTY(FIntProperty,Z_Param_inStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProgressActionCamera(ESSActionCameraID(Z_Param_inActionCameraID),Z_Param_inStep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execResetCamera)
	{
		P_GET_UBOOL(Z_Param_inImmediate);
		P_GET_UBOOL(Z_Param_inUseOverrideTargetPitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inOverrideTargetPitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDiffYaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inOverrideDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCamera(Z_Param_inImmediate,Z_Param_inUseOverrideTargetPitch,Z_Param_inOverrideTargetPitch,Z_Param_inDiffYaw,Z_Param_inOverrideDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execSetCameraPosition)
	{
		P_GET_ENUM(ESSCameraPosition,Z_Param_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraPosition(ESSCameraPosition(Z_Param_InPosition));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execSetControlledPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlledPawn(Z_Param_InPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execSetSceneCapture2D)
	{
		P_GET_OBJECT(ASceneCapture2D,Z_Param_inSceneCapture2D);
		P_GET_UBOOL(Z_Param_inCapture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSceneCapture2D(Z_Param_inSceneCapture2D,Z_Param_inCapture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execSetSceneCaptureEnable)
	{
		P_GET_UBOOL(Z_Param_inEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSceneCaptureEnable(Z_Param_inEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameplayCamera::execSwitchCameraPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchCameraPosition();
		P_NATIVE_END;
	}
	void AELSSGameplayCamera::StaticRegisterNativesAELSSGameplayCamera()
	{
		UClass* Class = AELSSGameplayCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndActionCamera", &AELSSGameplayCamera::execEndActionCamera },
			{ "ForceEndActionCamera", &AELSSGameplayCamera::execForceEndActionCamera },
			{ "GetCameraShake", &AELSSGameplayCamera::execGetCameraShake },
			{ "IsPlayingActionCamera", &AELSSGameplayCamera::execIsPlayingActionCamera },
			{ "OnJumped", &AELSSGameplayCamera::execOnJumped },
			{ "OnLanded", &AELSSGameplayCamera::execOnLanded },
			{ "PlayActionCamera", &AELSSGameplayCamera::execPlayActionCamera },
			{ "ProgressActionCamera", &AELSSGameplayCamera::execProgressActionCamera },
			{ "ResetCamera", &AELSSGameplayCamera::execResetCamera },
			{ "SetCameraPosition", &AELSSGameplayCamera::execSetCameraPosition },
			{ "SetControlledPawn", &AELSSGameplayCamera::execSetControlledPawn },
			{ "SetSceneCapture2D", &AELSSGameplayCamera::execSetSceneCapture2D },
			{ "SetSceneCaptureEnable", &AELSSGameplayCamera::execSetSceneCaptureEnable },
			{ "SwitchCameraPosition", &AELSSGameplayCamera::execSwitchCameraPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics
	{
		struct ELSSGameplayCamera_eventEndActionCamera_Parms
		{
			ESSActionCameraID inActionCameraID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inActionCameraID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inActionCameraID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::NewProp_inActionCameraID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::NewProp_inActionCameraID = { "inActionCameraID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventEndActionCamera_Parms, inActionCameraID), Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::NewProp_inActionCameraID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::NewProp_inActionCameraID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "EndActionCamera", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventEndActionCamera_Parms), Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "ForceEndActionCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics
	{
		struct ELSSGameplayCamera_eventGetCameraShake_Parms
		{
			ESSCameraShakeType InType;
			TSubclassOf<UELSSCameraShake>  ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventGetCameraShake_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSCameraShakeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventGetCameraShake_Parms, ReturnValue), Z_Construct_UClass_UELSSCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "GetCameraShake", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventGetCameraShake_Parms), Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics
	{
		struct ELSSGameplayCamera_eventIsPlayingActionCamera_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameplayCamera_eventIsPlayingActionCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameplayCamera_eventIsPlayingActionCamera_Parms), &Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "IsPlayingActionCamera", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventIsPlayingActionCamera_Parms), Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics
	{
		struct ELSSGameplayCamera_eventOnJumped_Parms
		{
			AELSSPlayer* inPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventOnJumped_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::NewProp_inPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "OnJumped", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventOnJumped_Parms), Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_OnJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_OnJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics
	{
		struct ELSSGameplayCamera_eventOnLanded_Parms
		{
			AELSSPlayer* inPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventOnLanded_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::NewProp_inPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "OnLanded", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventOnLanded_Parms), Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_OnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_OnLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics
	{
		struct ELSSGameplayCamera_eventPlayActionCamera_Parms
		{
			ESSActionCameraID inActionCameraID;
			AELSSPlayer* inPlayer;
			UELSSActionCameraController* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inActionCameraID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inActionCameraID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_inActionCameraID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_inActionCameraID = { "inActionCameraID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventPlayActionCamera_Parms, inActionCameraID), Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventPlayActionCamera_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventPlayActionCamera_Parms, ReturnValue), Z_Construct_UClass_UELSSActionCameraController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_inActionCameraID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_inActionCameraID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "PlayActionCamera", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventPlayActionCamera_Parms), Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics
	{
		struct ELSSGameplayCamera_eventProgressActionCamera_Parms
		{
			ESSActionCameraID inActionCameraID;
			int32 inStep;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inActionCameraID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inActionCameraID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::NewProp_inActionCameraID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::NewProp_inActionCameraID = { "inActionCameraID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventProgressActionCamera_Parms, inActionCameraID), Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::NewProp_inStep = { "inStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventProgressActionCamera_Parms, inStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::NewProp_inActionCameraID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::NewProp_inActionCameraID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::NewProp_inStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "ProgressActionCamera", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventProgressActionCamera_Parms), Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics
	{
		struct ELSSGameplayCamera_eventResetCamera_Parms
		{
			bool inImmediate;
			bool inUseOverrideTargetPitch;
			float inOverrideTargetPitch;
			float inDiffYaw;
			float inOverrideDuration;
		};
		static void NewProp_inImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inImmediate;
		static void NewProp_inUseOverrideTargetPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseOverrideTargetPitch;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inOverrideTargetPitch;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDiffYaw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inOverrideDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inImmediate_SetBit(void* Obj)
	{
		((ELSSGameplayCamera_eventResetCamera_Parms*)Obj)->inImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inImmediate = { "inImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameplayCamera_eventResetCamera_Parms), &Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inUseOverrideTargetPitch_SetBit(void* Obj)
	{
		((ELSSGameplayCamera_eventResetCamera_Parms*)Obj)->inUseOverrideTargetPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inUseOverrideTargetPitch = { "inUseOverrideTargetPitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameplayCamera_eventResetCamera_Parms), &Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inUseOverrideTargetPitch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inOverrideTargetPitch = { "inOverrideTargetPitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventResetCamera_Parms, inOverrideTargetPitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inDiffYaw = { "inDiffYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventResetCamera_Parms, inDiffYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inOverrideDuration = { "inOverrideDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventResetCamera_Parms, inOverrideDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inImmediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inUseOverrideTargetPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inOverrideTargetPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inDiffYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::NewProp_inOverrideDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "ResetCamera", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventResetCamera_Parms), Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics
	{
		struct ELSSGameplayCamera_eventSetCameraPosition_Parms
		{
			ESSCameraPosition InPosition;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPosition_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::NewProp_InPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventSetCameraPosition_Parms, InPosition), Z_Construct_UEnum_ABP_200508_ESSCameraPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::NewProp_InPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "SetCameraPosition", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventSetCameraPosition_Parms), Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics
	{
		struct ELSSGameplayCamera_eventSetControlledPawn_Parms
		{
			APawn* InPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventSetControlledPawn_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "SetControlledPawn", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventSetControlledPawn_Parms), Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics
	{
		struct ELSSGameplayCamera_eventSetSceneCapture2D_Parms
		{
			ASceneCapture2D* inSceneCapture2D;
			bool inCapture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inSceneCapture2D;
		static void NewProp_inCapture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inCapture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::NewProp_inSceneCapture2D = { "inSceneCapture2D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameplayCamera_eventSetSceneCapture2D_Parms, inSceneCapture2D), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::NewProp_inCapture_SetBit(void* Obj)
	{
		((ELSSGameplayCamera_eventSetSceneCapture2D_Parms*)Obj)->inCapture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::NewProp_inCapture = { "inCapture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameplayCamera_eventSetSceneCapture2D_Parms), &Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::NewProp_inCapture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::NewProp_inSceneCapture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::NewProp_inCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "SetSceneCapture2D", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventSetSceneCapture2D_Parms), Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics
	{
		struct ELSSGameplayCamera_eventSetSceneCaptureEnable_Parms
		{
			bool inEnable;
		};
		static void NewProp_inEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::NewProp_inEnable_SetBit(void* Obj)
	{
		((ELSSGameplayCamera_eventSetSceneCaptureEnable_Parms*)Obj)->inEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::NewProp_inEnable = { "inEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameplayCamera_eventSetSceneCaptureEnable_Parms), &Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::NewProp_inEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::NewProp_inEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "SetSceneCaptureEnable", nullptr, nullptr, sizeof(ELSSGameplayCamera_eventSetSceneCaptureEnable_Parms), Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameplayCamera, nullptr, "SwitchCameraPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSGameplayCamera_NoRegister()
	{
		return AELSSGameplayCamera::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGameplayCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseMoveInputScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseMoveInputScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepWatcherCameraDuration_AfterResetCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepWatcherCameraDuration_AfterResetCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatcherCameraRotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WatcherCameraRotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatcherResetCameraDisable_MetaData[];
#endif
		static void NewProp_WatcherResetCameraDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WatcherResetCameraDisable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraPosition;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraShakeDic_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraShakeDic_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraShakeDic_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeDic_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CameraShakeDic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionCameraController;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionCameraControllerTypes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionCameraControllerTypes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionCameraControllerTypes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraControllerTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActionCameraControllerTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionCameraControllerDic_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionCameraControllerDic_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionCameraControllerDic_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraControllerDic_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActionCameraControllerDic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraLocationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActionCameraLocationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraLerpAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActionCameraLerpAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraLerpBlendExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActionCameraLerpBlendExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraAlphaInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActionCameraAlphaInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraAlphaEndInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActionCameraAlphaEndInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneCapture2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneCapture2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideCameraTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideCameraTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamManagerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParamManagerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControlMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateControlParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateControlParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGameplayCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayCamera,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSGameplayCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSGameplayCamera_EndActionCamera, "EndActionCamera" }, // 2015356708
		{ &Z_Construct_UFunction_AELSSGameplayCamera_ForceEndActionCamera, "ForceEndActionCamera" }, // 1771468028
		{ &Z_Construct_UFunction_AELSSGameplayCamera_GetCameraShake, "GetCameraShake" }, // 489365833
		{ &Z_Construct_UFunction_AELSSGameplayCamera_IsPlayingActionCamera, "IsPlayingActionCamera" }, // 822929455
		{ &Z_Construct_UFunction_AELSSGameplayCamera_OnJumped, "OnJumped" }, // 2961959420
		{ &Z_Construct_UFunction_AELSSGameplayCamera_OnLanded, "OnLanded" }, // 2446697316
		{ &Z_Construct_UFunction_AELSSGameplayCamera_PlayActionCamera, "PlayActionCamera" }, // 1130784706
		{ &Z_Construct_UFunction_AELSSGameplayCamera_ProgressActionCamera, "ProgressActionCamera" }, // 4039314806
		{ &Z_Construct_UFunction_AELSSGameplayCamera_ResetCamera, "ResetCamera" }, // 2089472660
		{ &Z_Construct_UFunction_AELSSGameplayCamera_SetCameraPosition, "SetCameraPosition" }, // 3793558007
		{ &Z_Construct_UFunction_AELSSGameplayCamera_SetControlledPawn, "SetControlledPawn" }, // 3904981541
		{ &Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCapture2D, "SetSceneCapture2D" }, // 3759072193
		{ &Z_Construct_UFunction_AELSSGameplayCamera_SetSceneCaptureEnable, "SetSceneCaptureEnable" }, // 322503813
		{ &Z_Construct_UFunction_AELSSGameplayCamera_SwitchCameraPosition, "SwitchCameraPosition" }, // 1519255379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGameplayCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_MouseMoveInputScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_MouseMoveInputScale = { "MouseMoveInputScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, MouseMoveInputScale), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_MouseMoveInputScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_MouseMoveInputScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SleepWatcherCameraDuration_AfterResetCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SleepWatcherCameraDuration_AfterResetCamera = { "SleepWatcherCameraDuration_AfterResetCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, SleepWatcherCameraDuration_AfterResetCamera), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SleepWatcherCameraDuration_AfterResetCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SleepWatcherCameraDuration_AfterResetCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherCameraRotationInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherCameraRotationInterpSpeed = { "WatcherCameraRotationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, WatcherCameraRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherCameraRotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherCameraRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherResetCameraDisable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherResetCameraDisable_SetBit(void* Obj)
	{
		((AELSSGameplayCamera*)Obj)->WatcherResetCameraDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherResetCameraDisable = { "WatcherResetCameraDisable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSGameplayCamera), &Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherResetCameraDisable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherResetCameraDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherResetCameraDisable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraPosition = { "CameraPosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, CameraPosition), Z_Construct_UEnum_ABP_200508_ESSCameraPosition, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraPosition_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_ValueProp = { "CameraShakeDic", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELSSCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_Key_KeyProp = { "CameraShakeDic_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSCameraShakeType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic = { "CameraShakeDic", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, CameraShakeDic), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraController = { "ActionCameraController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraController), Z_Construct_UClass_UELSSActionCameraController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraController_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_ValueProp = { "ActionCameraControllerTypes", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELSSActionCameraController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_Key_KeyProp = { "ActionCameraControllerTypes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes = { "ActionCameraControllerTypes", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraControllerTypes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_ValueProp = { "ActionCameraControllerDic", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELSSActionCameraController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_Key_KeyProp = { "ActionCameraControllerDic_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic = { "ActionCameraControllerDic", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraControllerDic), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocation = { "ActionCameraLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocationInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocationInterpSpeed = { "ActionCameraLocationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLocationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpAlpha = { "ActionCameraLerpAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLerpAlpha), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpBlendExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpBlendExp = { "ActionCameraLerpBlendExp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLerpBlendExp), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpBlendExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpBlendExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaInterpSpeed = { "ActionCameraAlphaInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraAlphaInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaEndInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaEndInterpSpeed = { "ActionCameraAlphaEndInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraAlphaEndInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaEndInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaEndInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SceneCapture2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SceneCapture2D = { "SceneCapture2D", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, SceneCapture2D), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SceneCapture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SceneCapture2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_DefaultSceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_DefaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_DefaultSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, SpringArm), Z_Construct_UClass_UELSSSpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraParent = { "CameraParent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, CameraParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, PlayerController), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlledPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlledPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_OverrideCameraTargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_OverrideCameraTargetActor = { "OverrideCameraTargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, OverrideCameraTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_OverrideCameraTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_OverrideCameraTargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ParamManagerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ParamManagerType = { "ParamManagerType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ParamManagerType), Z_Construct_UClass_UELSSCameraParamManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ParamManagerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ParamManagerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Param_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, Param), Z_Construct_UClass_UELSSCameraParamManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlMode = { "ControlMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, ControlMode), Z_Construct_UEnum_ABP_200508_ESSCameraMode, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_StateControlParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_StateControlParam = { "StateControlParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, StateControlParam), Z_Construct_UScriptStruct_FSSCameraStateControlParam, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_StateControlParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_StateControlParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameplayCamera" },
		{ "ModuleRelativePath", "Public/ELSSGameplayCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameplayCamera, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSGameplayCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_MouseMoveInputScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SleepWatcherCameraDuration_AfterResetCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherCameraRotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_WatcherResetCameraDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraShakeDic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraControllerDic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLocationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraLerpBlendExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ActionCameraAlphaEndInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SceneCapture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_DefaultSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_CameraParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_OverrideCameraTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ParamManagerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_ControlMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_StateControlParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameplayCamera_Statics::NewProp_Rotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGameplayCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGameplayCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGameplayCamera_Statics::ClassParams = {
		&AELSSGameplayCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSGameplayCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGameplayCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameplayCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGameplayCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGameplayCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGameplayCamera, 1934851592);
	template<> ABP_200508_API UClass* StaticClass<AELSSGameplayCamera>()
	{
		return AELSSGameplayCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGameplayCamera(Z_Construct_UClass_AELSSGameplayCamera, &AELSSGameplayCamera::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGameplayCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGameplayCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
