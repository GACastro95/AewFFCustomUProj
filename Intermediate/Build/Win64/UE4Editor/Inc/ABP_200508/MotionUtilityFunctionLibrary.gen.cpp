// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MotionUtilityFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionUtilityFunctionLibrary() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UMotionUtilityFunctionLibrary_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UMotionUtilityFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execCallRefreshBoneTransforms)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionUtilityFunctionLibrary::CallRefreshBoneTransforms(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execConvertMotionBuilderEulerToUnrealEngineEuler)
	{
		P_GET_STRUCT(FVector,Z_Param_Euler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UMotionUtilityFunctionLibrary::ConvertMotionBuilderEulerToUnrealEngineEuler(Z_Param_Euler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execDisableRootMotion)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionUtilityFunctionLibrary::DisableRootMotion(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execFindAnimNotify)
	{
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_AnimNotifyEvent);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequence);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::FindAnimNotify(Z_Param_Out_AnimNotifyEvent,Z_Param_AnimSequence,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execFindAnimNotifyInSlot)
	{
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_AnimNotifyEvent);
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::FindAnimNotifyInSlot(Z_Param_Out_AnimNotifyEvent,Z_Param_AnimMontage,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execFindAnimNotifyInSlotAll)
	{
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_AnimNotifyEvents);
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::FindAnimNotifyInSlotAll(Z_Param_Out_AnimNotifyEvents,Z_Param_AnimMontage,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execFindAnimNotifyNearestPosition)
	{
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_AnimNotifyEvent);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimPos);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::FindAnimNotifyNearestPosition(Z_Param_Out_AnimNotifyEvent,Z_Param_AnimSequence,Z_Param_AnimPos,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execFindAnimNotifys)
	{
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_AnimNotifyEvents);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequence);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::FindAnimNotifys(Z_Param_Out_AnimNotifyEvents,Z_Param_AnimSequence,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execFindAnimNotifyState)
	{
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_AnimNotifyEvents);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequence);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::FindAnimNotifyState(Z_Param_Out_AnimNotifyEvents,Z_Param_AnimSequence,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execGetAnimNotifyStateDuration)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequence);
		P_GET_OBJECT(UAnimNotifyState,Z_Param_AnimNotifyState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMotionUtilityFunctionLibrary::GetAnimNotifyStateDuration(Z_Param_AnimSequence,Z_Param_AnimNotifyState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execGetMontageDirection)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Potision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMotionUtilityFunctionLibrary::GetMontageDirection(Z_Param_Character,Z_Param_Montage,Z_Param_Potision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execGetMontageLocation)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Potision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMotionUtilityFunctionLibrary::GetMontageLocation(Z_Param_Character,Z_Param_Montage,Z_Param_Potision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execGetMontageMoveDirection)
	{
		P_GET_UBOOL_REF(Z_Param_Out_NoneDirection);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Direction);
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionUtilityFunctionLibrary::GetMontageMoveDirection(Z_Param_Out_NoneDirection,Z_Param_Out_Direction,Z_Param_Character,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execGetMontageRootTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionUtilityFunctionLibrary::GetMontageRootTransform(Z_Param_Out_Transform,Z_Param_Character,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execGetMontageTransform)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Potision);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionUtilityFunctionLibrary::GetMontageTransform(Z_Param_Character,Z_Param_Montage,Z_Param_Potision,Z_Param_Out_Location,Z_Param_Out_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execIsExistAnimNotify)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequence);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::IsExistAnimNotify(Z_Param_AnimSequence,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionUtilityFunctionLibrary::execIsExistAnimNotifyState)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequence);
		P_GET_OBJECT(UClass,Z_Param_NotifyFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionUtilityFunctionLibrary::IsExistAnimNotifyState(Z_Param_AnimSequence,Z_Param_NotifyFilter);
		P_NATIVE_END;
	}
	void UMotionUtilityFunctionLibrary::StaticRegisterNativesUMotionUtilityFunctionLibrary()
	{
		UClass* Class = UMotionUtilityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallRefreshBoneTransforms", &UMotionUtilityFunctionLibrary::execCallRefreshBoneTransforms },
			{ "ConvertMotionBuilderEulerToUnrealEngineEuler", &UMotionUtilityFunctionLibrary::execConvertMotionBuilderEulerToUnrealEngineEuler },
			{ "DisableRootMotion", &UMotionUtilityFunctionLibrary::execDisableRootMotion },
			{ "FindAnimNotify", &UMotionUtilityFunctionLibrary::execFindAnimNotify },
			{ "FindAnimNotifyInSlot", &UMotionUtilityFunctionLibrary::execFindAnimNotifyInSlot },
			{ "FindAnimNotifyInSlotAll", &UMotionUtilityFunctionLibrary::execFindAnimNotifyInSlotAll },
			{ "FindAnimNotifyNearestPosition", &UMotionUtilityFunctionLibrary::execFindAnimNotifyNearestPosition },
			{ "FindAnimNotifys", &UMotionUtilityFunctionLibrary::execFindAnimNotifys },
			{ "FindAnimNotifyState", &UMotionUtilityFunctionLibrary::execFindAnimNotifyState },
			{ "GetAnimNotifyStateDuration", &UMotionUtilityFunctionLibrary::execGetAnimNotifyStateDuration },
			{ "GetMontageDirection", &UMotionUtilityFunctionLibrary::execGetMontageDirection },
			{ "GetMontageLocation", &UMotionUtilityFunctionLibrary::execGetMontageLocation },
			{ "GetMontageMoveDirection", &UMotionUtilityFunctionLibrary::execGetMontageMoveDirection },
			{ "GetMontageRootTransform", &UMotionUtilityFunctionLibrary::execGetMontageRootTransform },
			{ "GetMontageTransform", &UMotionUtilityFunctionLibrary::execGetMontageTransform },
			{ "IsExistAnimNotify", &UMotionUtilityFunctionLibrary::execIsExistAnimNotify },
			{ "IsExistAnimNotifyState", &UMotionUtilityFunctionLibrary::execIsExistAnimNotifyState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics
	{
		struct MotionUtilityFunctionLibrary_eventCallRefreshBoneTransforms_Parms
		{
			USkeletalMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventCallRefreshBoneTransforms_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "CallRefreshBoneTransforms", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventCallRefreshBoneTransforms_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics
	{
		struct MotionUtilityFunctionLibrary_eventConvertMotionBuilderEulerToUnrealEngineEuler_Parms
		{
			FVector Euler;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Euler;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::NewProp_Euler = { "Euler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventConvertMotionBuilderEulerToUnrealEngineEuler_Parms, Euler), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventConvertMotionBuilderEulerToUnrealEngineEuler_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::NewProp_Euler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "ConvertMotionBuilderEulerToUnrealEngineEuler", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventConvertMotionBuilderEulerToUnrealEngineEuler_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics
	{
		struct MotionUtilityFunctionLibrary_eventDisableRootMotion_Parms
		{
			const ACharacter* Character;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventDisableRootMotion_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "DisableRootMotion", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventDisableRootMotion_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics
	{
		struct MotionUtilityFunctionLibrary_eventFindAnimNotify_Parms
		{
			FAnimNotifyEvent AnimNotifyEvent;
			const UAnimSequenceBase* AnimSequence;
			TSubclassOf<UAnimNotify>  NotifyFilter;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_AnimNotifyEvent = { "AnimNotifyEvent", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotify_Parms, AnimNotifyEvent), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotify_Parms, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotify_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotify_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventFindAnimNotify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotify_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_AnimNotifyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "FindAnimNotify", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotify_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics
	{
		struct MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlot_Parms
		{
			FAnimNotifyEvent AnimNotifyEvent;
			const UAnimMontage* AnimMontage;
			TSubclassOf<UAnimNotify>  NotifyFilter;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_AnimNotifyEvent = { "AnimNotifyEvent", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlot_Parms, AnimNotifyEvent), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlot_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlot_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotify_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlot_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_AnimNotifyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "FindAnimNotifyInSlot", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlot_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics
	{
		struct MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlotAll_Parms
		{
			TArray<FAnimNotifyEvent> AnimNotifyEvents;
			const UAnimMontage* AnimMontage;
			TSubclassOf<UAnimNotify>  NotifyFilter;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEvents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifyEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimNotifyEvents_Inner = { "AnimNotifyEvents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimNotifyEvents = { "AnimNotifyEvents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlotAll_Parms, AnimNotifyEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlotAll_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlotAll_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotify_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlotAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlotAll_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimNotifyEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimNotifyEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "FindAnimNotifyInSlotAll", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyInSlotAll_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics
	{
		struct MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms
		{
			FAnimNotifyEvent AnimNotifyEvent;
			const UAnimSequenceBase* AnimSequence;
			float AnimPos;
			TSubclassOf<UAnimNotify>  NotifyFilter;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPos;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimNotifyEvent = { "AnimNotifyEvent", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms, AnimNotifyEvent), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimPos = { "AnimPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms, AnimPos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotify_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimNotifyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_AnimPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "FindAnimNotifyNearestPosition", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyNearestPosition_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics
	{
		struct MotionUtilityFunctionLibrary_eventFindAnimNotifys_Parms
		{
			TArray<FAnimNotifyEvent> AnimNotifyEvents;
			const UAnimSequenceBase* AnimSequence;
			TSubclassOf<UAnimNotify>  NotifyFilter;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEvents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifyEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimNotifyEvents_Inner = { "AnimNotifyEvents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimNotifyEvents = { "AnimNotifyEvents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifys_Parms, AnimNotifyEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifys_Parms, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifys_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotify_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventFindAnimNotifys_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifys_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimNotifyEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimNotifyEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "FindAnimNotifys", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifys_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics
	{
		struct MotionUtilityFunctionLibrary_eventFindAnimNotifyState_Parms
		{
			TArray<FAnimNotifyEvent> AnimNotifyEvents;
			const UAnimSequenceBase* AnimSequence;
			TSubclassOf<UAnimNotifyState>  NotifyFilter;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEvents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifyEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimNotifyEvents_Inner = { "AnimNotifyEvents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimNotifyEvents = { "AnimNotifyEvents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyState_Parms, AnimNotifyEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyState_Parms, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventFindAnimNotifyState_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotifyState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventFindAnimNotifyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyState_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimNotifyEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimNotifyEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "FindAnimNotifyState", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventFindAnimNotifyState_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics
	{
		struct MotionUtilityFunctionLibrary_eventGetAnimNotifyStateDuration_Parms
		{
			const UAnimSequenceBase* AnimSequence;
			const UAnimNotifyState* AnimNotifyState;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimNotifyState;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetAnimNotifyStateDuration_Parms, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimNotifyState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimNotifyState = { "AnimNotifyState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetAnimNotifyStateDuration_Parms, AnimNotifyState), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimNotifyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimNotifyState_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetAnimNotifyStateDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_AnimNotifyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "GetAnimNotifyStateDuration", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventGetAnimNotifyStateDuration_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics
	{
		struct MotionUtilityFunctionLibrary_eventGetMontageDirection_Parms
		{
			const ACharacter* Character;
			const UAnimMontage* Montage;
			float Potision;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Potision;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageDirection_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageDirection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Potision = { "Potision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageDirection_Parms, Potision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_Potision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "GetMontageDirection", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventGetMontageDirection_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics
	{
		struct MotionUtilityFunctionLibrary_eventGetMontageLocation_Parms
		{
			const ACharacter* Character;
			const UAnimMontage* Montage;
			float Potision;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Potision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageLocation_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageLocation_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Potision = { "Potision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageLocation_Parms, Potision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_Potision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "GetMontageLocation", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventGetMontageLocation_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics
	{
		struct MotionUtilityFunctionLibrary_eventGetMontageMoveDirection_Parms
		{
			bool NoneDirection;
			float Direction;
			const ACharacter* Character;
			const UAnimMontage* Montage;
		};
		static void NewProp_NoneDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NoneDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_NoneDirection_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventGetMontageMoveDirection_Parms*)Obj)->NoneDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_NoneDirection = { "NoneDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventGetMontageMoveDirection_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_NoneDirection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageMoveDirection_Parms, Direction), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageMoveDirection_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageMoveDirection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_NoneDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "GetMontageMoveDirection", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventGetMontageMoveDirection_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics
	{
		struct MotionUtilityFunctionLibrary_eventGetMontageRootTransform_Parms
		{
			FTransform Transform;
			const ACharacter* Character;
			const UAnimMontage* Montage;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageRootTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageRootTransform_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageRootTransform_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "GetMontageRootTransform", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventGetMontageRootTransform_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics
	{
		struct MotionUtilityFunctionLibrary_eventGetMontageTransform_Parms
		{
			const ACharacter* Character;
			const UAnimMontage* Montage;
			float Potision;
			FVector Location;
			float Yaw;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Potision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Potision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageTransform_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageTransform_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Potision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Potision = { "Potision", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageTransform_Parms, Potision), METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Potision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Potision_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageTransform_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventGetMontageTransform_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Potision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "GetMontageTransform", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventGetMontageTransform_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics
	{
		struct MotionUtilityFunctionLibrary_eventIsExistAnimNotify_Parms
		{
			const UAnimSequenceBase* AnimSequence;
			TSubclassOf<UAnimNotify>  NotifyFilter;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventIsExistAnimNotify_Parms, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventIsExistAnimNotify_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotify_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventIsExistAnimNotify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventIsExistAnimNotify_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "IsExistAnimNotify", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventIsExistAnimNotify_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics
	{
		struct MotionUtilityFunctionLibrary_eventIsExistAnimNotifyState_Parms
		{
			const UAnimSequenceBase* AnimSequence;
			TSubclassOf<UAnimNotifyState>  NotifyFilter;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NotifyFilter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventIsExistAnimNotifyState_Parms, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_NotifyFilter = { "NotifyFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MotionUtilityFunctionLibrary_eventIsExistAnimNotifyState_Parms, NotifyFilter), Z_Construct_UClass_UAnimNotifyState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionUtilityFunctionLibrary_eventIsExistAnimNotifyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MotionUtilityFunctionLibrary_eventIsExistAnimNotifyState_Parms), &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_NotifyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionUtilityFunctionLibrary, nullptr, "IsExistAnimNotifyState", nullptr, nullptr, sizeof(MotionUtilityFunctionLibrary_eventIsExistAnimNotifyState_Parms), Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionUtilityFunctionLibrary_NoRegister()
	{
		return UMotionUtilityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_CallRefreshBoneTransforms, "CallRefreshBoneTransforms" }, // 627167181
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_ConvertMotionBuilderEulerToUnrealEngineEuler, "ConvertMotionBuilderEulerToUnrealEngineEuler" }, // 3530561233
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_DisableRootMotion, "DisableRootMotion" }, // 3673840628
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotify, "FindAnimNotify" }, // 177380503
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlot, "FindAnimNotifyInSlot" }, // 836206429
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyInSlotAll, "FindAnimNotifyInSlotAll" }, // 2071802076
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyNearestPosition, "FindAnimNotifyNearestPosition" }, // 2873125502
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifys, "FindAnimNotifys" }, // 2510542484
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_FindAnimNotifyState, "FindAnimNotifyState" }, // 3288247575
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetAnimNotifyStateDuration, "GetAnimNotifyStateDuration" }, // 2621658432
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageDirection, "GetMontageDirection" }, // 557956631
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageLocation, "GetMontageLocation" }, // 2193392128
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageMoveDirection, "GetMontageMoveDirection" }, // 1996593182
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageRootTransform, "GetMontageRootTransform" }, // 3990739965
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_GetMontageTransform, "GetMontageTransform" }, // 2708381468
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotify, "IsExistAnimNotify" }, // 2553609344
		{ &Z_Construct_UFunction_UMotionUtilityFunctionLibrary_IsExistAnimNotifyState, "IsExistAnimNotifyState" }, // 2448052995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MotionUtilityFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionUtilityFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionUtilityFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::ClassParams = {
		&UMotionUtilityFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionUtilityFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionUtilityFunctionLibrary, 1178211867);
	template<> ABP_200508_API UClass* StaticClass<UMotionUtilityFunctionLibrary>()
	{
		return UMotionUtilityFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionUtilityFunctionLibrary(Z_Construct_UClass_UMotionUtilityFunctionLibrary, &UMotionUtilityFunctionLibrary::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UMotionUtilityFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionUtilityFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
