// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSyncMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSyncMotion() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSyncMotion_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSyncMotion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UELSSSyncMotion::execGetAnimScaleZ)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Chara);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimScaleZ(Z_Param_Chara);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execGetSyncOriginTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSyncOriginTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execIsSyncActorNow)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Chara);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSyncActorNow(Z_Param_Chara);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execOffsetOriginPivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffsetOriginPivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execSetSyncOff)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Chara);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncOff(Z_Param_Chara);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execSetSyncOriginLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncOriginLocation(Z_Param_Out_InLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execSetup)
	{
		P_GET_TARRAY_REF(ACharacter*,Z_Param_Out_characters);
		P_GET_OBJECT(ACharacter,Z_Param_syncOwner);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Out_characters,Z_Param_syncOwner,Z_Param_Out_InTransform,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execUpdateSyncOriginTransform)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inInterpSpd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSyncOriginTransform(Z_Param_Out_InLocation,Z_Param_Out_InRotation,Z_Param_inInterpSpd,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSyncMotion::execUpdateTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTransform(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UELSSSyncMotion::StaticRegisterNativesUELSSSyncMotion()
	{
		UClass* Class = UELSSSyncMotion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimScaleZ", &UELSSSyncMotion::execGetAnimScaleZ },
			{ "GetSyncOriginTransform", &UELSSSyncMotion::execGetSyncOriginTransform },
			{ "IsPlaying", &UELSSSyncMotion::execIsPlaying },
			{ "IsSyncActorNow", &UELSSSyncMotion::execIsSyncActorNow },
			{ "OffsetOriginPivot", &UELSSSyncMotion::execOffsetOriginPivot },
			{ "SetSyncOff", &UELSSSyncMotion::execSetSyncOff },
			{ "SetSyncOriginLocation", &UELSSSyncMotion::execSetSyncOriginLocation },
			{ "Setup", &UELSSSyncMotion::execSetup },
			{ "Stop", &UELSSSyncMotion::execStop },
			{ "Update", &UELSSSyncMotion::execUpdate },
			{ "UpdateSyncOriginTransform", &UELSSSyncMotion::execUpdateSyncOriginTransform },
			{ "UpdateTransform", &UELSSSyncMotion::execUpdateTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics
	{
		struct ELSSSyncMotion_eventGetAnimScaleZ_Parms
		{
			ACharacter* Chara;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventGetAnimScaleZ_Parms, Chara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventGetAnimScaleZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::NewProp_Chara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "GetAnimScaleZ", nullptr, nullptr, sizeof(ELSSSyncMotion_eventGetAnimScaleZ_Parms), Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics
	{
		struct ELSSSyncMotion_eventGetSyncOriginTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventGetSyncOriginTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "GetSyncOriginTransform", nullptr, nullptr, sizeof(ELSSSyncMotion_eventGetSyncOriginTransform_Parms), Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics
	{
		struct ELSSSyncMotion_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSyncMotion_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSyncMotion_eventIsPlaying_Parms), &Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "IsPlaying", nullptr, nullptr, sizeof(ELSSSyncMotion_eventIsPlaying_Parms), Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics
	{
		struct ELSSSyncMotion_eventIsSyncActorNow_Parms
		{
			const ACharacter* Chara;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chara_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_Chara_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventIsSyncActorNow_Parms, Chara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_Chara_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_Chara_MetaData)) };
	void Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSyncMotion_eventIsSyncActorNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSyncMotion_eventIsSyncActorNow_Parms), &Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_Chara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "IsSyncActorNow", nullptr, nullptr, sizeof(ELSSSyncMotion_eventIsSyncActorNow_Parms), Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "OffsetOriginPivot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics
	{
		struct ELSSSyncMotion_eventSetSyncOff_Parms
		{
			ACharacter* Chara;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventSetSyncOff_Parms, Chara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::NewProp_Chara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "SetSyncOff", nullptr, nullptr, sizeof(ELSSSyncMotion_eventSetSyncOff_Parms), Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics
	{
		struct ELSSSyncMotion_eventSetSyncOriginLocation_Parms
		{
			FVector InLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventSetSyncOriginLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "SetSyncOriginLocation", nullptr, nullptr, sizeof(ELSSSyncMotion_eventSetSyncOriginLocation_Parms), Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics
	{
		struct ELSSSyncMotion_eventSetup_Parms
		{
			TArray<ACharacter*> characters;
			ACharacter* syncOwner;
			FTransform InTransform;
			float InterpolateTime;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_syncOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_characters_Inner = { "characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_characters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_characters = { "characters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventSetup_Parms, characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_characters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_syncOwner = { "syncOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventSetup_Parms, syncOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventSetup_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventSetup_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_syncOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSSyncMotion_eventSetup_Parms), Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_Update_Statics
	{
		struct ELSSSyncMotion_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "Update", nullptr, nullptr, sizeof(ELSSSyncMotion_eventUpdate_Parms), Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics
	{
		struct ELSSSyncMotion_eventUpdateSyncOriginTransform_Parms
		{
			FVector InLocation;
			FRotator InRotation;
			float inInterpSpd;
			float DeltaTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inInterpSpd;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventUpdateSyncOriginTransform_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventUpdateSyncOriginTransform_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InRotation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_inInterpSpd = { "inInterpSpd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventUpdateSyncOriginTransform_Parms, inInterpSpd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventUpdateSyncOriginTransform_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_InRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_inInterpSpd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "UpdateSyncOriginTransform", nullptr, nullptr, sizeof(ELSSSyncMotion_eventUpdateSyncOriginTransform_Parms), Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics
	{
		struct ELSSSyncMotion_eventUpdateTransform_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSyncMotion_eventUpdateTransform_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSyncMotion, nullptr, "UpdateTransform", nullptr, nullptr, sizeof(ELSSSyncMotion_eventUpdateTransform_Parms), Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSSyncMotion_NoRegister()
	{
		return UELSSSyncMotion::StaticClass();
	}
	struct Z_Construct_UClass_UELSSSyncMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSSyncMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSSyncMotion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSSyncMotion_GetAnimScaleZ, "GetAnimScaleZ" }, // 1338950448
		{ &Z_Construct_UFunction_UELSSSyncMotion_GetSyncOriginTransform, "GetSyncOriginTransform" }, // 412474061
		{ &Z_Construct_UFunction_UELSSSyncMotion_IsPlaying, "IsPlaying" }, // 1095027299
		{ &Z_Construct_UFunction_UELSSSyncMotion_IsSyncActorNow, "IsSyncActorNow" }, // 3922522845
		{ &Z_Construct_UFunction_UELSSSyncMotion_OffsetOriginPivot, "OffsetOriginPivot" }, // 3513661308
		{ &Z_Construct_UFunction_UELSSSyncMotion_SetSyncOff, "SetSyncOff" }, // 1217730388
		{ &Z_Construct_UFunction_UELSSSyncMotion_SetSyncOriginLocation, "SetSyncOriginLocation" }, // 1600898826
		{ &Z_Construct_UFunction_UELSSSyncMotion_Setup, "Setup" }, // 4261326099
		{ &Z_Construct_UFunction_UELSSSyncMotion_Stop, "Stop" }, // 1681003011
		{ &Z_Construct_UFunction_UELSSSyncMotion_Update, "Update" }, // 697931663
		{ &Z_Construct_UFunction_UELSSSyncMotion_UpdateSyncOriginTransform, "UpdateSyncOriginTransform" }, // 2080314711
		{ &Z_Construct_UFunction_UELSSSyncMotion_UpdateTransform, "UpdateTransform" }, // 3074761471
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSyncMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSyncMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSyncMotion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSSyncMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSSyncMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSSyncMotion_Statics::ClassParams = {
		&UELSSSyncMotion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSSyncMotion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSyncMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSSyncMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSSyncMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSSyncMotion, 79794794);
	template<> ABP_200508_API UClass* StaticClass<UELSSSyncMotion>()
	{
		return UELSSSyncMotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSSyncMotion(Z_Construct_UClass_UELSSSyncMotion, &UELSSSyncMotion::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSSyncMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSSyncMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
