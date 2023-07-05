// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SyncMotionMontage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncMotionMontage() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ASyncMotionMontage_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ASyncMotionMontage();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESyncPosRotKind();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	DEFINE_FUNCTION(ASyncMotionMontage::execGetBasePointLocationAndRotation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBasePointLocationAndRotation(Z_Param_Out_Location,Z_Param_Out_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execGetSyncActor)
	{
		P_GET_TARRAY_REF(ACharacter*,Z_Param_Out_SyncActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSyncActor(Z_Param_Out_SyncActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execGetSyncActorIncludeSyncFinishedActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SyncActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSyncActorIncludeSyncFinishedActor(Z_Param_Out_SyncActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execGetSyncActorNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSyncActorNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execGetSyncChar)
	{
		P_GET_TARRAY_REF(AELCharacter_Native*,Z_Param_Out_CharArray);
		P_GET_OBJECT(AELCharacter_Native,Z_Param_IgnoreChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSyncChar(Z_Param_Out_CharArray,Z_Param_IgnoreChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execIsEnableSweep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableSweep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execIsEnableSweepAfterSyncOff)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CharaIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableSweepAfterSyncOff(Z_Param_CharaIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execIsNoSyncRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNoSyncRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execIsSyncOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSyncOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execIsUseCharacterHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUseCharacterHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execSetBasePointLocationAndRotation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBasePointLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execSetBasePointLocationTeleport)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBasePointLocationTeleport(Z_Param_Out_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execSetEnableSweepAfterSyncOff)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CharaIndex);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSweepAfterSyncOff(Z_Param_CharaIndex,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execSetEnableUpdateTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CharaIndex);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableUpdateTransform(Z_Param_CharaIndex,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execSetSkipCollisionResetForDestroy)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CharaIndex);
		P_GET_UBOOL(Z_Param_bSkip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkipCollisionResetForDestroy(Z_Param_CharaIndex,Z_Param_bSkip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execSetSyncOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASyncMotionMontage::execSetup)
	{
		P_GET_TARRAY_REF(AELCharacter_Native*,Z_Param_Out_characters);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SyncLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_SyncRotation);
		P_GET_ENUM(ESyncPosRotKind,Z_Param_posSyncKind);
		P_GET_ENUM(ESyncPosRotKind,Z_Param_rotSyncKind);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_GET_UBOOL(Z_Param_ignoreSweep);
		P_GET_UBOOL(Z_Param_noSyncRotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_useCharacterHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Out_characters,Z_Param_Out_SyncLocation,Z_Param_Out_SyncRotation,ESyncPosRotKind(Z_Param_posSyncKind),ESyncPosRotKind(Z_Param_rotSyncKind),Z_Param_InterpolateTime,Z_Param_ignoreSweep,Z_Param_noSyncRotation,Z_Param_Priority,Z_Param_useCharacterHeight);
		P_NATIVE_END;
	}
	void ASyncMotionMontage::StaticRegisterNativesASyncMotionMontage()
	{
		UClass* Class = ASyncMotionMontage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBasePointLocationAndRotation", &ASyncMotionMontage::execGetBasePointLocationAndRotation },
			{ "GetPriority", &ASyncMotionMontage::execGetPriority },
			{ "GetSyncActor", &ASyncMotionMontage::execGetSyncActor },
			{ "GetSyncActorIncludeSyncFinishedActor", &ASyncMotionMontage::execGetSyncActorIncludeSyncFinishedActor },
			{ "GetSyncActorNum", &ASyncMotionMontage::execGetSyncActorNum },
			{ "GetSyncChar", &ASyncMotionMontage::execGetSyncChar },
			{ "IsEnableSweep", &ASyncMotionMontage::execIsEnableSweep },
			{ "IsEnableSweepAfterSyncOff", &ASyncMotionMontage::execIsEnableSweepAfterSyncOff },
			{ "IsNoSyncRotation", &ASyncMotionMontage::execIsNoSyncRotation },
			{ "IsSyncOff", &ASyncMotionMontage::execIsSyncOff },
			{ "IsUseCharacterHeight", &ASyncMotionMontage::execIsUseCharacterHeight },
			{ "SetBasePointLocationAndRotation", &ASyncMotionMontage::execSetBasePointLocationAndRotation },
			{ "SetBasePointLocationTeleport", &ASyncMotionMontage::execSetBasePointLocationTeleport },
			{ "SetEnableSweepAfterSyncOff", &ASyncMotionMontage::execSetEnableSweepAfterSyncOff },
			{ "SetEnableUpdateTransform", &ASyncMotionMontage::execSetEnableUpdateTransform },
			{ "SetSkipCollisionResetForDestroy", &ASyncMotionMontage::execSetSkipCollisionResetForDestroy },
			{ "SetSyncOff", &ASyncMotionMontage::execSetSyncOff },
			{ "Setup", &ASyncMotionMontage::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics
	{
		struct SyncMotionMontage_eventGetBasePointLocationAndRotation_Parms
		{
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetBasePointLocationAndRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetBasePointLocationAndRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "GetBasePointLocationAndRotation", nullptr, nullptr, sizeof(SyncMotionMontage_eventGetBasePointLocationAndRotation_Parms), Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics
	{
		struct SyncMotionMontage_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "GetPriority", nullptr, nullptr, sizeof(SyncMotionMontage_eventGetPriority_Parms), Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics
	{
		struct SyncMotionMontage_eventGetSyncActor_Parms
		{
			TArray<ACharacter*> SyncActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SyncActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SyncActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::NewProp_SyncActors_Inner = { "SyncActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::NewProp_SyncActors = { "SyncActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetSyncActor_Parms, SyncActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::NewProp_SyncActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::NewProp_SyncActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "GetSyncActor", nullptr, nullptr, sizeof(SyncMotionMontage_eventGetSyncActor_Parms), Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics
	{
		struct SyncMotionMontage_eventGetSyncActorIncludeSyncFinishedActor_Parms
		{
			TArray<AActor*> SyncActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SyncActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SyncActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::NewProp_SyncActors_Inner = { "SyncActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::NewProp_SyncActors = { "SyncActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetSyncActorIncludeSyncFinishedActor_Parms, SyncActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::NewProp_SyncActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::NewProp_SyncActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "GetSyncActorIncludeSyncFinishedActor", nullptr, nullptr, sizeof(SyncMotionMontage_eventGetSyncActorIncludeSyncFinishedActor_Parms), Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics
	{
		struct SyncMotionMontage_eventGetSyncActorNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetSyncActorNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "GetSyncActorNum", nullptr, nullptr, sizeof(SyncMotionMontage_eventGetSyncActorNum_Parms), Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics
	{
		struct SyncMotionMontage_eventGetSyncChar_Parms
		{
			TArray<AELCharacter_Native*> CharArray;
			AELCharacter_Native* IgnoreChar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::NewProp_CharArray_Inner = { "CharArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::NewProp_CharArray = { "CharArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetSyncChar_Parms, CharArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::NewProp_IgnoreChar = { "IgnoreChar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventGetSyncChar_Parms, IgnoreChar), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::NewProp_CharArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::NewProp_CharArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::NewProp_IgnoreChar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "GetSyncChar", nullptr, nullptr, sizeof(SyncMotionMontage_eventGetSyncChar_Parms), Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics
	{
		struct SyncMotionMontage_eventIsEnableSweep_Parms
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
	void Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventIsEnableSweep_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventIsEnableSweep_Parms), &Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "IsEnableSweep", nullptr, nullptr, sizeof(SyncMotionMontage_eventIsEnableSweep_Parms), Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics
	{
		struct SyncMotionMontage_eventIsEnableSweepAfterSyncOff_Parms
		{
			int32 CharaIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharaIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::NewProp_CharaIndex = { "CharaIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventIsEnableSweepAfterSyncOff_Parms, CharaIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventIsEnableSweepAfterSyncOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventIsEnableSweepAfterSyncOff_Parms), &Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::NewProp_CharaIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "IsEnableSweepAfterSyncOff", nullptr, nullptr, sizeof(SyncMotionMontage_eventIsEnableSweepAfterSyncOff_Parms), Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics
	{
		struct SyncMotionMontage_eventIsNoSyncRotation_Parms
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
	void Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventIsNoSyncRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventIsNoSyncRotation_Parms), &Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "IsNoSyncRotation", nullptr, nullptr, sizeof(SyncMotionMontage_eventIsNoSyncRotation_Parms), Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics
	{
		struct SyncMotionMontage_eventIsSyncOff_Parms
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
	void Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventIsSyncOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventIsSyncOff_Parms), &Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "IsSyncOff", nullptr, nullptr, sizeof(SyncMotionMontage_eventIsSyncOff_Parms), Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics
	{
		struct SyncMotionMontage_eventIsUseCharacterHeight_Parms
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
	void Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventIsUseCharacterHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventIsUseCharacterHeight_Parms), &Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "IsUseCharacterHeight", nullptr, nullptr, sizeof(SyncMotionMontage_eventIsUseCharacterHeight_Parms), Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics
	{
		struct SyncMotionMontage_eventSetBasePointLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetBasePointLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetBasePointLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "SetBasePointLocationAndRotation", nullptr, nullptr, sizeof(SyncMotionMontage_eventSetBasePointLocationAndRotation_Parms), Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics
	{
		struct SyncMotionMontage_eventSetBasePointLocationTeleport_Parms
		{
			FVector NewLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetBasePointLocationTeleport_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::NewProp_NewLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "SetBasePointLocationTeleport", nullptr, nullptr, sizeof(SyncMotionMontage_eventSetBasePointLocationTeleport_Parms), Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics
	{
		struct SyncMotionMontage_eventSetEnableSweepAfterSyncOff_Parms
		{
			int32 CharaIndex;
			bool bEnable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharaIndex;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::NewProp_CharaIndex = { "CharaIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetEnableSweepAfterSyncOff_Parms, CharaIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventSetEnableSweepAfterSyncOff_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventSetEnableSweepAfterSyncOff_Parms), &Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::NewProp_CharaIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "SetEnableSweepAfterSyncOff", nullptr, nullptr, sizeof(SyncMotionMontage_eventSetEnableSweepAfterSyncOff_Parms), Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics
	{
		struct SyncMotionMontage_eventSetEnableUpdateTransform_Parms
		{
			int32 CharaIndex;
			bool bEnable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharaIndex;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::NewProp_CharaIndex = { "CharaIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetEnableUpdateTransform_Parms, CharaIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventSetEnableUpdateTransform_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventSetEnableUpdateTransform_Parms), &Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::NewProp_CharaIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "SetEnableUpdateTransform", nullptr, nullptr, sizeof(SyncMotionMontage_eventSetEnableUpdateTransform_Parms), Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics
	{
		struct SyncMotionMontage_eventSetSkipCollisionResetForDestroy_Parms
		{
			int32 CharaIndex;
			bool bSkip;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharaIndex;
		static void NewProp_bSkip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::NewProp_CharaIndex = { "CharaIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetSkipCollisionResetForDestroy_Parms, CharaIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::NewProp_bSkip_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventSetSkipCollisionResetForDestroy_Parms*)Obj)->bSkip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::NewProp_bSkip = { "bSkip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventSetSkipCollisionResetForDestroy_Parms), &Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::NewProp_bSkip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::NewProp_CharaIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::NewProp_bSkip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "SetSkipCollisionResetForDestroy", nullptr, nullptr, sizeof(SyncMotionMontage_eventSetSkipCollisionResetForDestroy_Parms), Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "SetSyncOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics
	{
		struct SyncMotionMontage_eventSetup_Parms
		{
			TArray<AELCharacter_Native*> characters;
			FVector SyncLocation;
			FRotator SyncRotation;
			ESyncPosRotKind posSyncKind;
			ESyncPosRotKind rotSyncKind;
			float InterpolateTime;
			bool ignoreSweep;
			bool noSyncRotation;
			int32 Priority;
			bool useCharacterHeight;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characters_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_posSyncKind_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_posSyncKind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rotSyncKind_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rotSyncKind;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolateTime;
		static void NewProp_ignoreSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ignoreSweep;
		static void NewProp_noSyncRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_noSyncRotation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static void NewProp_useCharacterHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useCharacterHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_characters_Inner = { "characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_characters = { "characters", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetup_Parms, characters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncLocation = { "SyncLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetup_Parms, SyncLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncRotation = { "SyncRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetup_Parms, SyncRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_posSyncKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_posSyncKind = { "posSyncKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetup_Parms, posSyncKind), Z_Construct_UEnum_ABP_200508_ESyncPosRotKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_rotSyncKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_rotSyncKind = { "rotSyncKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetup_Parms, rotSyncKind), Z_Construct_UEnum_ABP_200508_ESyncPosRotKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetup_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_ignoreSweep_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventSetup_Parms*)Obj)->ignoreSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_ignoreSweep = { "ignoreSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventSetup_Parms), &Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_ignoreSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_noSyncRotation_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventSetup_Parms*)Obj)->noSyncRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_noSyncRotation = { "noSyncRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventSetup_Parms), &Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_noSyncRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SyncMotionMontage_eventSetup_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_useCharacterHeight_SetBit(void* Obj)
	{
		((SyncMotionMontage_eventSetup_Parms*)Obj)->useCharacterHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_useCharacterHeight = { "useCharacterHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SyncMotionMontage_eventSetup_Parms), &Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_useCharacterHeight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_characters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_SyncRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_posSyncKind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_posSyncKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_rotSyncKind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_rotSyncKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_InterpolateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_ignoreSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_noSyncRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::NewProp_useCharacterHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASyncMotionMontage, nullptr, "Setup", nullptr, nullptr, sizeof(SyncMotionMontage_eventSetup_Parms), Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASyncMotionMontage_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASyncMotionMontage_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASyncMotionMontage_NoRegister()
	{
		return ASyncMotionMontage::StaticClass();
	}
	struct Z_Construct_UClass_ASyncMotionMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisableChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASyncMotionMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASyncMotionMontage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASyncMotionMontage_GetBasePointLocationAndRotation, "GetBasePointLocationAndRotation" }, // 2795601357
		{ &Z_Construct_UFunction_ASyncMotionMontage_GetPriority, "GetPriority" }, // 2772735516
		{ &Z_Construct_UFunction_ASyncMotionMontage_GetSyncActor, "GetSyncActor" }, // 1442986559
		{ &Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorIncludeSyncFinishedActor, "GetSyncActorIncludeSyncFinishedActor" }, // 1877750000
		{ &Z_Construct_UFunction_ASyncMotionMontage_GetSyncActorNum, "GetSyncActorNum" }, // 315731375
		{ &Z_Construct_UFunction_ASyncMotionMontage_GetSyncChar, "GetSyncChar" }, // 3348217144
		{ &Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweep, "IsEnableSweep" }, // 227712466
		{ &Z_Construct_UFunction_ASyncMotionMontage_IsEnableSweepAfterSyncOff, "IsEnableSweepAfterSyncOff" }, // 4220029692
		{ &Z_Construct_UFunction_ASyncMotionMontage_IsNoSyncRotation, "IsNoSyncRotation" }, // 2006395358
		{ &Z_Construct_UFunction_ASyncMotionMontage_IsSyncOff, "IsSyncOff" }, // 2481156543
		{ &Z_Construct_UFunction_ASyncMotionMontage_IsUseCharacterHeight, "IsUseCharacterHeight" }, // 951911615
		{ &Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationAndRotation, "SetBasePointLocationAndRotation" }, // 2322751992
		{ &Z_Construct_UFunction_ASyncMotionMontage_SetBasePointLocationTeleport, "SetBasePointLocationTeleport" }, // 419133457
		{ &Z_Construct_UFunction_ASyncMotionMontage_SetEnableSweepAfterSyncOff, "SetEnableSweepAfterSyncOff" }, // 3061580009
		{ &Z_Construct_UFunction_ASyncMotionMontage_SetEnableUpdateTransform, "SetEnableUpdateTransform" }, // 1015558045
		{ &Z_Construct_UFunction_ASyncMotionMontage_SetSkipCollisionResetForDestroy, "SetSkipCollisionResetForDestroy" }, // 2913740322
		{ &Z_Construct_UFunction_ASyncMotionMontage_SetSyncOff, "SetSyncOff" }, // 3424417422
		{ &Z_Construct_UFunction_ASyncMotionMontage_Setup, "Setup" }, // 2440849873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASyncMotionMontage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SyncMotionMontage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASyncMotionMontage_Statics::NewProp_DisableChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SyncMotionMontage" },
		{ "ModuleRelativePath", "Public/SyncMotionMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASyncMotionMontage_Statics::NewProp_DisableChannel = { "DisableChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASyncMotionMontage, DisableChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_ASyncMotionMontage_Statics::NewProp_DisableChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASyncMotionMontage_Statics::NewProp_DisableChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASyncMotionMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASyncMotionMontage_Statics::NewProp_DisableChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASyncMotionMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASyncMotionMontage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASyncMotionMontage_Statics::ClassParams = {
		&ASyncMotionMontage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASyncMotionMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASyncMotionMontage_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASyncMotionMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASyncMotionMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASyncMotionMontage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASyncMotionMontage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASyncMotionMontage, 2562306078);
	template<> ABP_200508_API UClass* StaticClass<ASyncMotionMontage>()
	{
		return ASyncMotionMontage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASyncMotionMontage(Z_Construct_UClass_ASyncMotionMontage, &ASyncMotionMontage::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ASyncMotionMontage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASyncMotionMontage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
