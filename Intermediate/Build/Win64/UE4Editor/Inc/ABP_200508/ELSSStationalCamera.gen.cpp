// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSStationalCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSStationalCamera() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStationalCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStationalCamera();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStationalCameraEaseType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraLocatorComponent_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSStationalCamera::execChangeLocator)
	{
		P_GET_STRUCT(FTransform,Z_Param_inBaseTransform);
		P_GET_PROPERTY(FIntProperty,Z_Param_inLocatorId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inInterpDuration);
		P_GET_ENUM(ESSStationalCameraEaseType,Z_Param_inEaseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLocator(Z_Param_inBaseTransform,Z_Param_inLocatorId,Z_Param_inInterpDuration,ESSStationalCameraEaseType(Z_Param_inEaseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execCheckCollision)
	{
		P_GET_STRUCT(FTransform,Z_Param_inBaseTransform);
		P_GET_PROPERTY(FIntProperty,Z_Param_inLocatorId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inCurrentLocatorTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCollision(Z_Param_inBaseTransform,Z_Param_inLocatorId,Z_Param_inCurrentLocatorTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execSetActorAttacker)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorAttacker(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execSetActorReceiver)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorReceiver(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execSetDisable)
	{
		P_GET_UBOOL(Z_Param_inDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisable(Z_Param_inDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execSetDisableCheckCollision)
	{
		P_GET_UBOOL(Z_Param_inDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableCheckCollision(Z_Param_inDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStationalCamera::execSetup)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inWorldOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param_inTargetActor,Z_Param_Out_inWorldOffset);
		P_NATIVE_END;
	}
	void AELSSStationalCamera::StaticRegisterNativesAELSSStationalCamera()
	{
		UClass* Class = AELSSStationalCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeLocator", &AELSSStationalCamera::execChangeLocator },
			{ "CheckCollision", &AELSSStationalCamera::execCheckCollision },
			{ "Finish", &AELSSStationalCamera::execFinish },
			{ "IsActive", &AELSSStationalCamera::execIsActive },
			{ "SetActorAttacker", &AELSSStationalCamera::execSetActorAttacker },
			{ "SetActorReceiver", &AELSSStationalCamera::execSetActorReceiver },
			{ "SetDisable", &AELSSStationalCamera::execSetDisable },
			{ "SetDisableCheckCollision", &AELSSStationalCamera::execSetDisableCheckCollision },
			{ "Setup", &AELSSStationalCamera::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics
	{
		struct ELSSStationalCamera_eventChangeLocator_Parms
		{
			FTransform inBaseTransform;
			int32 inLocatorId;
			float inInterpDuration;
			ESSStationalCameraEaseType inEaseType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inBaseTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLocatorId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inInterpDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inEaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inEaseType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inBaseTransform = { "inBaseTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventChangeLocator_Parms, inBaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inLocatorId = { "inLocatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventChangeLocator_Parms, inLocatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inInterpDuration = { "inInterpDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventChangeLocator_Parms, inInterpDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inEaseType = { "inEaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventChangeLocator_Parms, inEaseType), Z_Construct_UEnum_ABP_200508_ESSStationalCameraEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inBaseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inLocatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inInterpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inEaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::NewProp_inEaseType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "ChangeLocator", nullptr, nullptr, sizeof(ELSSStationalCamera_eventChangeLocator_Parms), Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics
	{
		struct ELSSStationalCamera_eventCheckCollision_Parms
		{
			FTransform inBaseTransform;
			int32 inLocatorId;
			float inCurrentLocatorTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inBaseTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLocatorId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inCurrentLocatorTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_inBaseTransform = { "inBaseTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventCheckCollision_Parms, inBaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_inLocatorId = { "inLocatorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventCheckCollision_Parms, inLocatorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_inCurrentLocatorTime = { "inCurrentLocatorTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventCheckCollision_Parms, inCurrentLocatorTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSStationalCamera_eventCheckCollision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSStationalCamera_eventCheckCollision_Parms), &Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_inBaseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_inLocatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_inCurrentLocatorTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "CheckCollision", nullptr, nullptr, sizeof(ELSSStationalCamera_eventCheckCollision_Parms), Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_CheckCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_CheckCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_Finish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics
	{
		struct ELSSStationalCamera_eventIsActive_Parms
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
	void Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSStationalCamera_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSStationalCamera_eventIsActive_Parms), &Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "IsActive", nullptr, nullptr, sizeof(ELSSStationalCamera_eventIsActive_Parms), Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics
	{
		struct ELSSStationalCamera_eventSetActorAttacker_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventSetActorAttacker_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "SetActorAttacker", nullptr, nullptr, sizeof(ELSSStationalCamera_eventSetActorAttacker_Parms), Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics
	{
		struct ELSSStationalCamera_eventSetActorReceiver_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventSetActorReceiver_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "SetActorReceiver", nullptr, nullptr, sizeof(ELSSStationalCamera_eventSetActorReceiver_Parms), Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics
	{
		struct ELSSStationalCamera_eventSetDisable_Parms
		{
			bool inDisable;
		};
		static void NewProp_inDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inDisable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::NewProp_inDisable_SetBit(void* Obj)
	{
		((ELSSStationalCamera_eventSetDisable_Parms*)Obj)->inDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::NewProp_inDisable = { "inDisable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSStationalCamera_eventSetDisable_Parms), &Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::NewProp_inDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::NewProp_inDisable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "SetDisable", nullptr, nullptr, sizeof(ELSSStationalCamera_eventSetDisable_Parms), Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_SetDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_SetDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics
	{
		struct ELSSStationalCamera_eventSetDisableCheckCollision_Parms
		{
			bool inDisable;
		};
		static void NewProp_inDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inDisable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::NewProp_inDisable_SetBit(void* Obj)
	{
		((ELSSStationalCamera_eventSetDisableCheckCollision_Parms*)Obj)->inDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::NewProp_inDisable = { "inDisable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSStationalCamera_eventSetDisableCheckCollision_Parms), &Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::NewProp_inDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::NewProp_inDisable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "SetDisableCheckCollision", nullptr, nullptr, sizeof(ELSSStationalCamera_eventSetDisableCheckCollision_Parms), Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics
	{
		struct ELSSStationalCamera_eventSetup_Parms
		{
			AActor* inTargetActor;
			FVector inWorldOffset;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inWorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inWorldOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventSetup_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_inWorldOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_inWorldOffset = { "inWorldOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStationalCamera_eventSetup_Parms, inWorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_inWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_inWorldOffset_MetaData)) };
	void Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSStationalCamera_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSStationalCamera_eventSetup_Parms), &Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_inWorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStationalCamera, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSStationalCamera_eventSetup_Parms), Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStationalCamera_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStationalCamera_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSStationalCamera_NoRegister()
	{
		return AELSSStationalCamera::StaticClass();
	}
	struct Z_Construct_UClass_AELSSStationalCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocatorParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocatorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locators_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Locators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attacker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Receiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocatorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLocatorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocatorParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocatorParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpStartFocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpStartFocalLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpTimeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpTimeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpEaseType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpEaseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InterpEaseType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disable_MetaData[];
#endif
		static void NewProp_Disable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableCheckCollision_MetaData[];
#endif
		static void NewProp_DisableCheckCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableCheckCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTgt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackTgt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSStationalCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSStationalCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSStationalCamera_ChangeLocator, "ChangeLocator" }, // 1160690739
		{ &Z_Construct_UFunction_AELSSStationalCamera_CheckCollision, "CheckCollision" }, // 1170783564
		{ &Z_Construct_UFunction_AELSSStationalCamera_Finish, "Finish" }, // 1194921343
		{ &Z_Construct_UFunction_AELSSStationalCamera_IsActive, "IsActive" }, // 3136633348
		{ &Z_Construct_UFunction_AELSSStationalCamera_SetActorAttacker, "SetActorAttacker" }, // 2859582618
		{ &Z_Construct_UFunction_AELSSStationalCamera_SetActorReceiver, "SetActorReceiver" }, // 1906192676
		{ &Z_Construct_UFunction_AELSSStationalCamera_SetDisable, "SetDisable" }, // 3059560377
		{ &Z_Construct_UFunction_AELSSStationalCamera_SetDisableCheckCollision, "SetDisableCheckCollision" }, // 930051221
		{ &Z_Construct_UFunction_AELSSStationalCamera_Setup, "Setup" }, // 3408923556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "ELSSStationalCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BlendOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BlendOutDuration = { "BlendOutDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, BlendOutDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BlendOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BlendOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorParamTable = { "LocatorParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, LocatorParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorOwner = { "LocatorOwner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, LocatorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_Inner = { "Locators", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSCameraLocatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators = { "Locators", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, Locators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Attacker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Attacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Attacker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Receiver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, Receiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Receiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Receiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BaseTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BaseTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorId = { "CurrentLocatorId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, CurrentLocatorId), METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorParam = { "CurrentLocatorParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, CurrentLocatorParam), Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStart = { "InterpStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, InterpStart), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStartFocalLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStartFocalLength = { "InterpStartFocalLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, InterpStartFocalLength), METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStartFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStartFocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpTimeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpTimeCount = { "InterpTimeCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, InterpTimeCount), METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpTimeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpTimeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpDuration = { "InterpDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, InterpDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpEaseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpEaseType = { "InterpEaseType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, InterpEaseType), Z_Construct_UEnum_ABP_200508_ESSStationalCameraEaseType, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpEaseType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CameraComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, CameraComp), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, WorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Disable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Disable_SetBit(void* Obj)
	{
		((AELSSStationalCamera*)Obj)->Disable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Disable = { "Disable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSStationalCamera), &Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Disable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Disable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Disable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_DisableCheckCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_DisableCheckCollision_SetBit(void* Obj)
	{
		((AELSSStationalCamera*)Obj)->DisableCheckCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_DisableCheckCollision = { "DisableCheckCollision", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSStationalCamera), &Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_DisableCheckCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_DisableCheckCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_DisableCheckCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_TrackTgt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStationalCamera" },
		{ "ModuleRelativePath", "Public/ELSSStationalCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_TrackTgt = { "TrackTgt", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStationalCamera, TrackTgt), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_TrackTgt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_TrackTgt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSStationalCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BlendOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_LocatorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Locators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Attacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Receiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_BaseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CurrentLocatorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpStartFocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpTimeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpEaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_InterpEaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_WorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_Disable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_DisableCheckCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStationalCamera_Statics::NewProp_TrackTgt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSStationalCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSStationalCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSStationalCamera_Statics::ClassParams = {
		&AELSSStationalCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSStationalCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSStationalCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStationalCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSStationalCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSStationalCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSStationalCamera, 3766990859);
	template<> ABP_200508_API UClass* StaticClass<AELSSStationalCamera>()
	{
		return AELSSStationalCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSStationalCamera(Z_Construct_UClass_AELSSStationalCamera, &AELSSStationalCamera::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSStationalCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSStationalCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
