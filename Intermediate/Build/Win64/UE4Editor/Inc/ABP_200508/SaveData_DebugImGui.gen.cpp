// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_DebugImGui.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_DebugImGui() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DebugImGui_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DebugImGui();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DebugBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventResult();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_DebugImGui::execOnEOSEventDispatcher)
	{
		P_GET_ENUM(EELEOSEventType,Z_Param_EventType);
		P_GET_ENUM(EELEOSEventResult,Z_Param_EventResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEOSEventDispatcher(EELEOSEventType(Z_Param_EventType),EELEOSEventResult(Z_Param_EventResult));
		P_NATIVE_END;
	}
	void USaveData_DebugImGui::StaticRegisterNativesUSaveData_DebugImGui()
	{
		UClass* Class = USaveData_DebugImGui::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEOSEventDispatcher", &USaveData_DebugImGui::execOnEOSEventDispatcher },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics
	{
		struct SaveData_DebugImGui_eventOnEOSEventDispatcher_Parms
		{
			EELEOSEventType EventType;
			EELEOSEventResult EventResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugImGui_eventOnEOSEventDispatcher_Parms, EventType), Z_Construct_UEnum_ABP_200508_EELEOSEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventResult = { "EventResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugImGui_eventOnEOSEventDispatcher_Parms, EventResult), Z_Construct_UEnum_ABP_200508_EELEOSEventResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::NewProp_EventResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugImGui.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugImGui, nullptr, "OnEOSEventDispatcher", nullptr, nullptr, sizeof(SaveData_DebugImGui_eventOnEOSEventDispatcher_Parms), Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_DebugImGui_NoRegister()
	{
		return USaveData_DebugImGui::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_DebugImGui_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cAccessors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cAccessors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cAccessors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_DebugImGui_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveData_DebugBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_DebugImGui_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_DebugImGui_OnEOSEventDispatcher, "OnEOSEventDispatcher" }, // 4054489449
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_DebugImGui_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_DebugImGui.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_DebugImGui.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveData_DebugImGui_Statics::NewProp_m_cAccessors_Inner = { "m_cAccessors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_DebugImGui_Statics::NewProp_m_cAccessors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_DebugImGui" },
		{ "ModuleRelativePath", "Public/SaveData_DebugImGui.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_DebugImGui_Statics::NewProp_m_cAccessors = { "m_cAccessors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_DebugImGui, m_cAccessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_DebugImGui_Statics::NewProp_m_cAccessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DebugImGui_Statics::NewProp_m_cAccessors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_DebugImGui_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_DebugImGui_Statics::NewProp_m_cAccessors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_DebugImGui_Statics::NewProp_m_cAccessors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_DebugImGui_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_DebugImGui>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_DebugImGui_Statics::ClassParams = {
		&USaveData_DebugImGui::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveData_DebugImGui_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DebugImGui_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_DebugImGui_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DebugImGui_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_DebugImGui()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_DebugImGui_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_DebugImGui, 436015991);
	template<> ABP_200508_API UClass* StaticClass<USaveData_DebugImGui>()
	{
		return USaveData_DebugImGui::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_DebugImGui(Z_Construct_UClass_USaveData_DebugImGui, &USaveData_DebugImGui::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_DebugImGui"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_DebugImGui);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
