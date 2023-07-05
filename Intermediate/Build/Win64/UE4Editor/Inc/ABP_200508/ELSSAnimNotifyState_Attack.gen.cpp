// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotifyState_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotifyState_Attack() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyState_Attack_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyState_Attack();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSAttackShapeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackCollisionParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void UELSSAnimNotifyState_Attack::StaticRegisterNativesUELSSAnimNotifyState_Attack()
	{
	}
	UClass* Z_Construct_UClass_UELSSAnimNotifyState_Attack_NoRegister()
	{
		return UELSSAnimNotifyState_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackHitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackHitId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Shapes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeBlendParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeBlendParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShapeBlendParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_workCollisionParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_workCollisionParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_workShapeParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_workShapeParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationTable_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DurationTable_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DurationTable;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeCountTable_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeCountTable_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCountTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TimeCountTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSAnimNotifyStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotifyState_Attack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_AttackHitId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_AttackHitId = { "AttackHitId", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotifyState_Attack, AttackHitId), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_AttackHitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_AttackHitId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSAttackShapeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_Shapes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotifyState_Attack, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_Shapes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_ShapeBlendParams_Inner = { "ShapeBlendParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSAttackShapeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_ShapeBlendParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_ShapeBlendParams = { "ShapeBlendParams", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotifyState_Attack, ShapeBlendParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_ShapeBlendParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_ShapeBlendParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workCollisionParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workCollisionParam = { "workCollisionParam", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotifyState_Attack, workCollisionParam), Z_Construct_UScriptStruct_FSSAttackCollisionParam, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workCollisionParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workCollisionParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workShapeParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workShapeParam = { "workShapeParam", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotifyState_Attack, workShapeParam), Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workShapeParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workShapeParam_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable_ValueProp = { "DurationTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable_Key_KeyProp = { "DurationTable_Key", nullptr, (EPropertyFlags)0x0000000000080001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable = { "DurationTable", nullptr, (EPropertyFlags)0x0020088000002015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotifyState_Attack, DurationTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable_ValueProp = { "TimeCountTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable_Key_KeyProp = { "TimeCountTable_Key", nullptr, (EPropertyFlags)0x0000000000080001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable = { "TimeCountTable", nullptr, (EPropertyFlags)0x0020088000002015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotifyState_Attack, TimeCountTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_AttackHitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_Shapes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_Shapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_ShapeBlendParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_ShapeBlendParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workCollisionParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_workShapeParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_DurationTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::NewProp_TimeCountTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotifyState_Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::ClassParams = {
		&UELSSAnimNotifyState_Attack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::PropPointers),
		0,
		0x009130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotifyState_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotifyState_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotifyState_Attack, 69512208);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotifyState_Attack>()
	{
		return UELSSAnimNotifyState_Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotifyState_Attack(Z_Construct_UClass_UELSSAnimNotifyState_Attack, &UELSSAnimNotifyState_Attack::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotifyState_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotifyState_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
