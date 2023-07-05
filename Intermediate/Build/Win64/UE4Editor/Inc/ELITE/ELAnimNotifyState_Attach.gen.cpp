// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAnimNotifyState_Attach.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyState_Attach() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_Attach_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_Attach();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyStateBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELConstraintParam();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
// End Cross Module References
	void UELAnimNotifyState_Attach::StaticRegisterNativesUELAnimNotifyState_Attach()
	{
	}
	UClass* Z_Construct_UClass_UELAnimNotifyState_Attach_NoRegister()
	{
		return UELAnimNotifyState_Attach::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyState_Attach_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimNotifyStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyState_Attach.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_Attach.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELConstraintParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_List_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimNotifyState_Attach" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_Attach.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimNotifyState_Attach, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_List_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_HeightRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimNotifyState_Attach" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_Attach.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_HeightRange = { "HeightRange", nullptr, (EPropertyFlags)0x00200c0000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimNotifyState_Attach, HeightRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_HeightRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_HeightRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::NewProp_HeightRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyState_Attach>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::ClassParams = {
		&UELAnimNotifyState_Attach::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::PropPointers),
		0,
		0x001130A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyState_Attach()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyState_Attach_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyState_Attach, 3833042163);
	template<> ELITE_API UClass* StaticClass<UELAnimNotifyState_Attach>()
	{
		return UELAnimNotifyState_Attach::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyState_Attach(Z_Construct_UClass_UELAnimNotifyState_Attach, &UELAnimNotifyState_Attach::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAnimNotifyState_Attach"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyState_Attach);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
