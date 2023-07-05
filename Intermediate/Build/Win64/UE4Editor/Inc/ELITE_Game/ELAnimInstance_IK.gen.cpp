// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELAnimInstance_IK.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimInstance_IK() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimInstance_IK_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimInstance_IK();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELIKPartType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerAP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELCutsceneIKParameter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELAttachCondition();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimInstance_IK::execConvertPartType2NodeName)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->ConvertPartType2NodeName(EELIKPartType(Z_Param_PartType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execConvertWrestlerAP2NodeName)
	{
		P_GET_ENUM(EWrestlerAP,Z_Param_AttachPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->ConvertWrestlerAP2NodeName(EWrestlerAP(Z_Param_AttachPoint));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execFinishAllIK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAllIK(Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execFinishConstraint)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AnchorNodeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishConstraint(Z_Param_AnchorNodeName,Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execFinishIK)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishIK(EELIKPartType(Z_Param_PartType),Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execGetBone2NodeName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AnchorNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBone2NodeName(Z_Param_AnchorNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execGetBoneLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_SpaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneLocation(Z_Param_Out_Location,Z_Param_BoneName,EBoneSpaces::Type(Z_Param_SpaceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execGetBoneTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneTransform(Z_Param_Out_Transform,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execGetEffectBoneLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_ENUM(EELIKPartType,Z_Param_EffectBone);
		P_GET_PROPERTY(FByteProperty,Z_Param_SpaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEffectBoneLocation(Z_Param_Out_Location,EELIKPartType(Z_Param_EffectBone),EBoneSpaces::Type(Z_Param_SpaceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execGetIKParam)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_EffectTransform);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BlendRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIKParam(EELIKPartType(Z_Param_PartType),Z_Param_Out_EffectTransform,Z_Param_Out_BlendRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execGetPartParam)
	{
		P_GET_STRUCT_REF(FELCutsceneIKParameter,Z_Param_Out_OutParam);
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPartParam(Z_Param_Out_OutParam,EELIKPartType(Z_Param_PartType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execIsControlIK)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControlIK(EELIKPartType(Z_Param_PartType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execIsSupportNodeName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSupportNodeName(Z_Param_NodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execSetTargetLocation)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLocation(EELIKPartType(Z_Param_PartType),Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execStartConstraint)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_IKBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_AnchorNodeName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_ConstraintMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintNodeName);
		P_GET_STRUCT(FELAttachCondition,Z_Param_Condition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxBlendRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartConstraint(Z_Param_IKBoneName,Z_Param_AnchorNodeName,Z_Param_ConstraintMesh,Z_Param_ConstraintNodeName,Z_Param_Condition,Z_Param_BlendTime,Z_Param_MaxBlendRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execStartConstraintBySocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AnchorNodeName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_ConstraintMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintNodeName);
		P_GET_STRUCT(FELAttachCondition,Z_Param_Condition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxBlendRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartConstraintBySocket(Z_Param_AnchorNodeName,Z_Param_ConstraintMesh,Z_Param_ConstraintNodeName,Z_Param_Condition,Z_Param_BlendTime,Z_Param_MaxBlendRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execStartConstraintByType)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_GET_PROPERTY(FNameProperty,Z_Param_AnchorNodeName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_ConstraintMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintNodeName);
		P_GET_STRUCT(FELAttachCondition,Z_Param_Condition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxBlendRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartConstraintByType(EELIKPartType(Z_Param_PartType),Z_Param_AnchorNodeName,Z_Param_ConstraintMesh,Z_Param_ConstraintNodeName,Z_Param_Condition,Z_Param_BlendTime,Z_Param_MaxBlendRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execStartLocationIK)
	{
		P_GET_ENUM(EELIKPartType,Z_Param_PartType);
		P_GET_STRUCT(FELAttachCondition,Z_Param_Condition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxBlendRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLocationIK(EELIKPartType(Z_Param_PartType),Z_Param_Condition,Z_Param_BlendTime,Z_Param_MaxBlendRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_IK::execTransformBoneSpaceLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoneSpaceLocation);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformBoneSpaceLocation(Z_Param_Out_BoneSpaceLocation,Z_Param_BoneName,Z_Param_InLocation);
		P_NATIVE_END;
	}
	static FName NAME_UELAnimInstance_IK_UpdateVector = FName(TEXT("UpdateVector"));
	void UELAnimInstance_IK::UpdateVector(float DeltaSeconds)
	{
		ELAnimInstance_IK_eventUpdateVector_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UELAnimInstance_IK_UpdateVector),&Parms);
	}
	void UELAnimInstance_IK::StaticRegisterNativesUELAnimInstance_IK()
	{
		UClass* Class = UELAnimInstance_IK::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertPartType2NodeName", &UELAnimInstance_IK::execConvertPartType2NodeName },
			{ "ConvertWrestlerAP2NodeName", &UELAnimInstance_IK::execConvertWrestlerAP2NodeName },
			{ "FinishAllIK", &UELAnimInstance_IK::execFinishAllIK },
			{ "FinishConstraint", &UELAnimInstance_IK::execFinishConstraint },
			{ "FinishIK", &UELAnimInstance_IK::execFinishIK },
			{ "GetBone2NodeName", &UELAnimInstance_IK::execGetBone2NodeName },
			{ "GetBoneLocation", &UELAnimInstance_IK::execGetBoneLocation },
			{ "GetBoneTransform", &UELAnimInstance_IK::execGetBoneTransform },
			{ "GetEffectBoneLocation", &UELAnimInstance_IK::execGetEffectBoneLocation },
			{ "GetIKParam", &UELAnimInstance_IK::execGetIKParam },
			{ "GetPartParam", &UELAnimInstance_IK::execGetPartParam },
			{ "IsControlIK", &UELAnimInstance_IK::execIsControlIK },
			{ "IsSupportNodeName", &UELAnimInstance_IK::execIsSupportNodeName },
			{ "SetTargetLocation", &UELAnimInstance_IK::execSetTargetLocation },
			{ "StartConstraint", &UELAnimInstance_IK::execStartConstraint },
			{ "StartConstraintBySocket", &UELAnimInstance_IK::execStartConstraintBySocket },
			{ "StartConstraintByType", &UELAnimInstance_IK::execStartConstraintByType },
			{ "StartLocationIK", &UELAnimInstance_IK::execStartLocationIK },
			{ "TransformBoneSpaceLocation", &UELAnimInstance_IK::execTransformBoneSpaceLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics
	{
		struct ELAnimInstance_IK_eventConvertPartType2NodeName_Parms
		{
			EELIKPartType PartType;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_PartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventConvertPartType2NodeName_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_PartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_PartType_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventConvertPartType2NodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "ConvertPartType2NodeName", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventConvertPartType2NodeName_Parms), Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics
	{
		struct ELAnimInstance_IK_eventConvertWrestlerAP2NodeName_Parms
		{
			EWrestlerAP AttachPoint;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachPoint_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachPoint;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_AttachPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_AttachPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventConvertWrestlerAP2NodeName_Parms, AttachPoint), Z_Construct_UEnum_ELITE_Game_EWrestlerAP, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_AttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_AttachPoint_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventConvertWrestlerAP2NodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_AttachPoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_AttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "ConvertWrestlerAP2NodeName", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventConvertWrestlerAP2NodeName_Parms), Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics
	{
		struct ELAnimInstance_IK_eventFinishAllIK_Parms
		{
			float BlendTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::NewProp_BlendTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventFinishAllIK_Parms, BlendTime), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::NewProp_BlendTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "FinishAllIK", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventFinishAllIK_Parms), Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics
	{
		struct ELAnimInstance_IK_eventFinishConstraint_Parms
		{
			FName AnchorNodeName;
			float BlendTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnchorNodeName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::NewProp_AnchorNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::NewProp_AnchorNodeName = { "AnchorNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventFinishConstraint_Parms, AnchorNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::NewProp_AnchorNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::NewProp_AnchorNodeName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventFinishConstraint_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::NewProp_AnchorNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "FinishConstraint", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventFinishConstraint_Parms), Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics
	{
		struct ELAnimInstance_IK_eventFinishIK_Parms
		{
			EELIKPartType PartType;
			float BlendTime;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventFinishIK_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventFinishIK_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::NewProp_BlendTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "FinishIK", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventFinishIK_Parms), Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_FinishIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_FinishIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics
	{
		struct ELAnimInstance_IK_eventGetBone2NodeName_Parms
		{
			FName AnchorNodeName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnchorNodeName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::NewProp_AnchorNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::NewProp_AnchorNodeName = { "AnchorNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetBone2NodeName_Parms, AnchorNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::NewProp_AnchorNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::NewProp_AnchorNodeName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetBone2NodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::NewProp_AnchorNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "GetBone2NodeName", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventGetBone2NodeName_Parms), Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics
	{
		struct ELAnimInstance_IK_eventGetBoneLocation_Parms
		{
			FVector Location;
			FName BoneName;
			TEnumAsByte<EBoneSpaces::Type> SpaceType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetBoneLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetBoneLocation_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_SpaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_SpaceType = { "SpaceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetBoneLocation_Parms, SpaceType), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_SpaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_SpaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::NewProp_SpaceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "GetBoneLocation", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventGetBoneLocation_Parms), Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics
	{
		struct ELAnimInstance_IK_eventGetBoneTransform_Parms
		{
			FTransform Transform;
			FName BoneName;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetBoneTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetBoneTransform_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "GetBoneTransform", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventGetBoneTransform_Parms), Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics
	{
		struct ELAnimInstance_IK_eventGetEffectBoneLocation_Parms
		{
			FVector Location;
			EELIKPartType EffectBone;
			TEnumAsByte<EBoneSpaces::Type> SpaceType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectBone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetEffectBoneLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_EffectBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_EffectBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_EffectBone = { "EffectBone", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetEffectBoneLocation_Parms, EffectBone), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_EffectBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_EffectBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_SpaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_SpaceType = { "SpaceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetEffectBoneLocation_Parms, SpaceType), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_SpaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_SpaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_EffectBone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_EffectBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::NewProp_SpaceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "GetEffectBoneLocation", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventGetEffectBoneLocation_Parms), Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics
	{
		struct ELAnimInstance_IK_eventGetIKParam_Parms
		{
			EELIKPartType PartType;
			FTransform EffectTransform;
			float BlendRate;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectTransform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetIKParam_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_EffectTransform = { "EffectTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetIKParam_Parms, EffectTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_BlendRate = { "BlendRate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetIKParam_Parms, BlendRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_EffectTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::NewProp_BlendRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "GetIKParam", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventGetIKParam_Parms), Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics
	{
		struct ELAnimInstance_IK_eventGetPartParam_Parms
		{
			FELCutsceneIKParameter OutParam;
			EELIKPartType PartType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetPartParam_Parms, OutParam), Z_Construct_UScriptStruct_FELCutsceneIKParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_PartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventGetPartParam_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_PartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_PartType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::NewProp_PartType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "GetPartParam", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventGetPartParam_Parms), Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics
	{
		struct ELAnimInstance_IK_eventIsControlIK_Parms
		{
			EELIKPartType PartType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_PartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventIsControlIK_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_PartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_PartType_MetaData)) };
	void Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAnimInstance_IK_eventIsControlIK_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAnimInstance_IK_eventIsControlIK_Parms), &Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "IsControlIK", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventIsControlIK_Parms), Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics
	{
		struct ELAnimInstance_IK_eventIsSupportNodeName_Parms
		{
			FName NodeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NodeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventIsSupportNodeName_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_NodeName_MetaData)) };
	void Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAnimInstance_IK_eventIsSupportNodeName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAnimInstance_IK_eventIsSupportNodeName_Parms), &Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "IsSupportNodeName", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventIsSupportNodeName_Parms), Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics
	{
		struct ELAnimInstance_IK_eventSetTargetLocation_Parms
		{
			EELIKPartType PartType;
			FVector Location;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventSetTargetLocation_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventSetTargetLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "SetTargetLocation", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventSetTargetLocation_Parms), Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics
	{
		struct ELAnimInstance_IK_eventStartConstraint_Parms
		{
			FName IKBoneName;
			FName AnchorNodeName;
			USkeletalMeshComponent* ConstraintMesh;
			FName ConstraintNodeName;
			FELAttachCondition Condition;
			float BlendTime;
			float MaxBlendRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IKBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnchorNodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintNodeName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBlendRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBlendRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_IKBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_IKBoneName = { "IKBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraint_Parms, IKBoneName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_IKBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_IKBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_AnchorNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_AnchorNodeName = { "AnchorNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraint_Parms, AnchorNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_AnchorNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_AnchorNodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintMesh = { "ConstraintMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraint_Parms, ConstraintMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintNodeName = { "ConstraintNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraint_Parms, ConstraintNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintNodeName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraint_Parms, Condition), Z_Construct_UScriptStruct_FELAttachCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_BlendTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraint_Parms, BlendTime), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_MaxBlendRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_MaxBlendRate = { "MaxBlendRate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraint_Parms, MaxBlendRate), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_MaxBlendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_MaxBlendRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_IKBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_AnchorNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_ConstraintNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::NewProp_MaxBlendRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "StartConstraint", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventStartConstraint_Parms), Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics
	{
		struct ELAnimInstance_IK_eventStartConstraintBySocket_Parms
		{
			FName AnchorNodeName;
			USkeletalMeshComponent* ConstraintMesh;
			FName ConstraintNodeName;
			FELAttachCondition Condition;
			float BlendTime;
			float MaxBlendRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnchorNodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintNodeName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBlendRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBlendRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_AnchorNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_AnchorNodeName = { "AnchorNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintBySocket_Parms, AnchorNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_AnchorNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_AnchorNodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintMesh = { "ConstraintMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintBySocket_Parms, ConstraintMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintNodeName = { "ConstraintNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintBySocket_Parms, ConstraintNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintNodeName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintBySocket_Parms, Condition), Z_Construct_UScriptStruct_FELAttachCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_BlendTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintBySocket_Parms, BlendTime), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_MaxBlendRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_MaxBlendRate = { "MaxBlendRate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintBySocket_Parms, MaxBlendRate), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_MaxBlendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_MaxBlendRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_AnchorNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_ConstraintNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::NewProp_MaxBlendRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "StartConstraintBySocket", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventStartConstraintBySocket_Parms), Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics
	{
		struct ELAnimInstance_IK_eventStartConstraintByType_Parms
		{
			EELIKPartType PartType;
			FName AnchorNodeName;
			USkeletalMeshComponent* ConstraintMesh;
			FName ConstraintNodeName;
			FELAttachCondition Condition;
			float BlendTime;
			float MaxBlendRate;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnchorNodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintNodeName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBlendRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBlendRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_PartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintByType_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_PartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_PartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_AnchorNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_AnchorNodeName = { "AnchorNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintByType_Parms, AnchorNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_AnchorNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_AnchorNodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintMesh = { "ConstraintMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintByType_Parms, ConstraintMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintNodeName = { "ConstraintNodeName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintByType_Parms, ConstraintNodeName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintNodeName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintByType_Parms, Condition), Z_Construct_UScriptStruct_FELAttachCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_BlendTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintByType_Parms, BlendTime), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_MaxBlendRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_MaxBlendRate = { "MaxBlendRate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartConstraintByType_Parms, MaxBlendRate), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_MaxBlendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_MaxBlendRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_AnchorNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_ConstraintNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::NewProp_MaxBlendRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "StartConstraintByType", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventStartConstraintByType_Parms), Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics
	{
		struct ELAnimInstance_IK_eventStartLocationIK_Parms
		{
			EELIKPartType PartType;
			FELAttachCondition Condition;
			float BlendTime;
			float MaxBlendRate;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Condition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBlendRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_PartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_PartType = { "PartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartLocationIK_Parms, PartType), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartLocationIK_Parms, Condition), Z_Construct_UScriptStruct_FELAttachCondition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartLocationIK_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_MaxBlendRate = { "MaxBlendRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventStartLocationIK_Parms, MaxBlendRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_PartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_PartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::NewProp_MaxBlendRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "StartLocationIK", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventStartLocationIK_Parms), Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics
	{
		struct ELAnimInstance_IK_eventTransformBoneSpaceLocation_Parms
		{
			FVector BoneSpaceLocation;
			FName BoneName;
			FVector InLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneSpaceLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_BoneSpaceLocation = { "BoneSpaceLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventTransformBoneSpaceLocation_Parms, BoneSpaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventTransformBoneSpaceLocation_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventTransformBoneSpaceLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_BoneSpaceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "TransformBoneSpaceLocation", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventTransformBoneSpaceLocation_Parms), Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_IK_eventUpdateVector_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_IK, nullptr, "UpdateVector", nullptr, nullptr, sizeof(ELAnimInstance_IK_eventUpdateVector_Parms), Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimInstance_IK_NoRegister()
	{
		return UELAnimInstance_IK::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimInstance_IK_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableIK_MetaData[];
#endif
		static void NewProp_bEnableIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableUpdate_MetaData[];
#endif
		static void NewProp_bDisableUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableUpdate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKParameters_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IKParameters_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IKParameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IKParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectBoneList_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectBoneList_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectBoneList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectBoneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EffectBoneList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointNameList_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointNameList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachPointNameList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AttachPointNameList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimInstance_IK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimInstance_IK_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimInstance_IK_ConvertPartType2NodeName, "ConvertPartType2NodeName" }, // 2342219168
		{ &Z_Construct_UFunction_UELAnimInstance_IK_ConvertWrestlerAP2NodeName, "ConvertWrestlerAP2NodeName" }, // 1411909082
		{ &Z_Construct_UFunction_UELAnimInstance_IK_FinishAllIK, "FinishAllIK" }, // 3222088559
		{ &Z_Construct_UFunction_UELAnimInstance_IK_FinishConstraint, "FinishConstraint" }, // 1727588348
		{ &Z_Construct_UFunction_UELAnimInstance_IK_FinishIK, "FinishIK" }, // 1681512779
		{ &Z_Construct_UFunction_UELAnimInstance_IK_GetBone2NodeName, "GetBone2NodeName" }, // 3803298473
		{ &Z_Construct_UFunction_UELAnimInstance_IK_GetBoneLocation, "GetBoneLocation" }, // 17582441
		{ &Z_Construct_UFunction_UELAnimInstance_IK_GetBoneTransform, "GetBoneTransform" }, // 529256487
		{ &Z_Construct_UFunction_UELAnimInstance_IK_GetEffectBoneLocation, "GetEffectBoneLocation" }, // 4055494941
		{ &Z_Construct_UFunction_UELAnimInstance_IK_GetIKParam, "GetIKParam" }, // 2391940874
		{ &Z_Construct_UFunction_UELAnimInstance_IK_GetPartParam, "GetPartParam" }, // 2197178919
		{ &Z_Construct_UFunction_UELAnimInstance_IK_IsControlIK, "IsControlIK" }, // 2558118697
		{ &Z_Construct_UFunction_UELAnimInstance_IK_IsSupportNodeName, "IsSupportNodeName" }, // 2170538820
		{ &Z_Construct_UFunction_UELAnimInstance_IK_SetTargetLocation, "SetTargetLocation" }, // 810606769
		{ &Z_Construct_UFunction_UELAnimInstance_IK_StartConstraint, "StartConstraint" }, // 1894752720
		{ &Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintBySocket, "StartConstraintBySocket" }, // 2007243038
		{ &Z_Construct_UFunction_UELAnimInstance_IK_StartConstraintByType, "StartConstraintByType" }, // 3404915712
		{ &Z_Construct_UFunction_UELAnimInstance_IK_StartLocationIK, "StartLocationIK" }, // 3211770753
		{ &Z_Construct_UFunction_UELAnimInstance_IK_TransformBoneSpaceLocation, "TransformBoneSpaceLocation" }, // 4153096934
		{ &Z_Construct_UFunction_UELAnimInstance_IK_UpdateVector, "UpdateVector" }, // 1865623356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_IK_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELAnimInstance_IK.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bEnableIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_IK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bEnableIK_SetBit(void* Obj)
	{
		((UELAnimInstance_IK*)Obj)->bEnableIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bEnableIK = { "bEnableIK", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_IK), &Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bEnableIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bEnableIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bEnableIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bDisableUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_IK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bDisableUpdate_SetBit(void* Obj)
	{
		((UELAnimInstance_IK*)Obj)->bDisableUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bDisableUpdate = { "bDisableUpdate", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_IK), &Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bDisableUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bDisableUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bDisableUpdate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_ValueProp = { "IKParameters", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELCutsceneIKParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_Key_KeyProp = { "IKParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_IK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters = { "IKParameters", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_IK, IKParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_ValueProp = { "EffectBoneList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_Key_KeyProp = { "EffectBoneList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_IK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList = { "EffectBoneList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_IK, EffectBoneList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList_ValueProp = { "AttachPointNameList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList_Key_KeyProp = { "AttachPointNameList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_IK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_IK.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList = { "AttachPointNameList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_IK, AttachPointNameList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimInstance_IK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bEnableIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_bDisableUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_IKParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_EffectBoneList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_IK_Statics::NewProp_AttachPointNameList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimInstance_IK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimInstance_IK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimInstance_IK_Statics::ClassParams = {
		&UELAnimInstance_IK::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAnimInstance_IK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_IK_Statics::PropPointers),
		0,
		0x009000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_IK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_IK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimInstance_IK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimInstance_IK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimInstance_IK, 1404927571);
	template<> ELITE_GAME_API UClass* StaticClass<UELAnimInstance_IK>()
	{
		return UELAnimInstance_IK::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimInstance_IK(Z_Construct_UClass_UELAnimInstance_IK, &UELAnimInstance_IK::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELAnimInstance_IK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimInstance_IK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
