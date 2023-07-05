// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMenuData();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EELCustomSearchMenuState();
// End Cross Module References
	DEFINE_FUNCTION(UELCustomSearchBase::execInitializeTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTable_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UELCustomSearchBase_InitializeTable = FName(TEXT("InitializeTable"));
	void UELCustomSearchBase::InitializeTable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCustomSearchBase_InitializeTable),NULL);
	}
	void UELCustomSearchBase::StaticRegisterNativesUELCustomSearchBase()
	{
		UClass* Class = UELCustomSearchBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTable", &UELCustomSearchBase::execInitializeTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCustomSearchBase_InitializeTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchBase_InitializeTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCustomSearchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCustomSearchBase_InitializeTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCustomSearchBase, nullptr, "InitializeTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchBase_InitializeTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchBase_InitializeTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCustomSearchBase_InitializeTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCustomSearchBase_InitializeTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCustomSearchBase_NoRegister()
	{
		return UELCustomSearchBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCustomSearchBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMenuTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMenuTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pObj;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MenuData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MenuData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_MenuData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_eMenuState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_eMenuState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_eMenuState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCustomSearchBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCustomSearchBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCustomSearchBase_InitializeTable, "InitializeTable" }, // 2799556236
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCustomSearchBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pMenuTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchBase" },
		{ "ModuleRelativePath", "Public/ELCustomSearchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pMenuTable = { "m_pMenuTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCustomSearchBase, m_pMenuTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pMenuTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pMenuTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pObj_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchBase" },
		{ "ModuleRelativePath", "Public/ELCustomSearchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pObj = { "m_pObj", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCustomSearchBase, m_pObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pObj_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_MenuData_Inner = { "m_MenuData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCustomSearchMenuData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_MenuData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchBase" },
		{ "ModuleRelativePath", "Public/ELCustomSearchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_MenuData = { "m_MenuData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCustomSearchBase, m_MenuData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_MenuData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_MenuData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_eMenuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_eMenuState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchBase" },
		{ "ModuleRelativePath", "Public/ELCustomSearchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_eMenuState = { "m_eMenuState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCustomSearchBase, m_eMenuState), Z_Construct_UEnum_ELITE_EELCustomSearchMenuState, METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_eMenuState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_eMenuState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCustomSearchBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pMenuTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_pObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_MenuData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_MenuData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_eMenuState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchBase_Statics::NewProp_m_eMenuState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCustomSearchBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCustomSearchBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCustomSearchBase_Statics::ClassParams = {
		&UELCustomSearchBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCustomSearchBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCustomSearchBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCustomSearchBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCustomSearchBase, 1711494951);
	template<> ELITE_API UClass* StaticClass<UELCustomSearchBase>()
	{
		return UELCustomSearchBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCustomSearchBase(Z_Construct_UClass_UELCustomSearchBase, &UELCustomSearchBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCustomSearchBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCustomSearchBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
