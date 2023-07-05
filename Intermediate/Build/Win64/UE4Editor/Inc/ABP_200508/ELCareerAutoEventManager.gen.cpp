// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerAutoEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerAutoEventManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAutoEventManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAutoEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerAutoEventManager::execAddAutoEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAutoEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerAutoEventManager_LoadDataTable = FName(TEXT("LoadDataTable"));
	void UELCareerAutoEventManager::LoadDataTable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerAutoEventManager_LoadDataTable),NULL);
	}
	void UELCareerAutoEventManager::StaticRegisterNativesUELCareerAutoEventManager()
	{
		UClass* Class = UELCareerAutoEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAutoEvent", &UELCareerAutoEventManager::execAddAutoEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics
	{
		struct ELCareerAutoEventManager_eventAddAutoEvent_Parms
		{
			FName EventName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoEventManager_eventAddAutoEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoEventManager, nullptr, "AddAutoEvent", nullptr, nullptr, sizeof(ELCareerAutoEventManager_eventAddAutoEvent_Parms), Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoEventManager, nullptr, "LoadDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerAutoEventManager_NoRegister()
	{
		return UELCareerAutoEventManager::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerAutoEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_m_NameTable_AutoEvent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NameTable_AutoEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_NameTable_AutoEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerAutoEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerAutoEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerAutoEventManager_AddAutoEvent, "AddAutoEvent" }, // 2233600268
		{ &Z_Construct_UFunction_UELCareerAutoEventManager_LoadDataTable, "LoadDataTable" }, // 4237781117
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAutoEventManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerAutoEventManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerAutoEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELCareerAutoEventManager_Statics::NewProp_m_NameTable_AutoEvent_Inner = { "m_NameTable_AutoEvent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAutoEventManager_Statics::NewProp_m_NameTable_AutoEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAutoEventManager" },
		{ "ModuleRelativePath", "Public/ELCareerAutoEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerAutoEventManager_Statics::NewProp_m_NameTable_AutoEvent = { "m_NameTable_AutoEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAutoEventManager, m_NameTable_AutoEvent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerAutoEventManager_Statics::NewProp_m_NameTable_AutoEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAutoEventManager_Statics::NewProp_m_NameTable_AutoEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerAutoEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAutoEventManager_Statics::NewProp_m_NameTable_AutoEvent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAutoEventManager_Statics::NewProp_m_NameTable_AutoEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerAutoEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerAutoEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerAutoEventManager_Statics::ClassParams = {
		&UELCareerAutoEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerAutoEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAutoEventManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerAutoEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAutoEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerAutoEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerAutoEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerAutoEventManager, 2130719172);
	template<> ABP_200508_API UClass* StaticClass<UELCareerAutoEventManager>()
	{
		return UELCareerAutoEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerAutoEventManager(Z_Construct_UClass_UELCareerAutoEventManager, &UELCareerAutoEventManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerAutoEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerAutoEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
