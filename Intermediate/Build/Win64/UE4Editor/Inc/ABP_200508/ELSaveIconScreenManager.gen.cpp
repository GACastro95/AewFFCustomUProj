// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSaveIconScreenManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSaveIconScreenManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSaveIconScreenManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSaveIconScreenManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSaveIconScreenExecutorBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSaveIconScreenManager::execIsRunningIconScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunningIconScreen();
		P_NATIVE_END;
	}
	void UELSaveIconScreenManager::StaticRegisterNativesUELSaveIconScreenManager()
	{
		UClass* Class = UELSaveIconScreenManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRunningIconScreen", &UELSaveIconScreenManager::execIsRunningIconScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics
	{
		struct ELSaveIconScreenManager_eventIsRunningIconScreen_Parms
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
	void Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSaveIconScreenManager_eventIsRunningIconScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSaveIconScreenManager_eventIsRunningIconScreen_Parms), &Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveIconScreenManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveIconScreenManager, nullptr, "IsRunningIconScreen", nullptr, nullptr, sizeof(ELSaveIconScreenManager_eventIsRunningIconScreen_Parms), Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSaveIconScreenManager_NoRegister()
	{
		return UELSaveIconScreenManager::StaticClass();
	}
	struct Z_Construct_UClass_UELSaveIconScreenManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_m_CheckSaveDataAccessorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CheckSaveDataAccessorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CheckSaveDataAccessorList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ScreenExecutor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ScreenExecutor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ShowMinimumTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ShowMinimumTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RunningIconScreen_MetaData[];
#endif
		static void NewProp_m_RunningIconScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_RunningIconScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSaveIconScreenManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSaveIconScreenManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSaveIconScreenManager_IsRunningIconScreen, "IsRunningIconScreen" }, // 743074732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveIconScreenManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSaveIconScreenManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSaveIconScreenManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_CheckSaveDataAccessorList_Inner = { "m_CheckSaveDataAccessorList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_CheckSaveDataAccessorList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveIconScreenManager" },
		{ "ModuleRelativePath", "Public/ELSaveIconScreenManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_CheckSaveDataAccessorList = { "m_CheckSaveDataAccessorList", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveIconScreenManager, m_CheckSaveDataAccessorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_CheckSaveDataAccessorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_CheckSaveDataAccessorList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ScreenExecutor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveIconScreenManager" },
		{ "ModuleRelativePath", "Public/ELSaveIconScreenManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ScreenExecutor = { "m_ScreenExecutor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveIconScreenManager, m_ScreenExecutor), Z_Construct_UClass_UELSaveIconScreenExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ScreenExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ScreenExecutor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ShowMinimumTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveIconScreenManager" },
		{ "ModuleRelativePath", "Public/ELSaveIconScreenManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ShowMinimumTimer = { "m_ShowMinimumTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveIconScreenManager, m_ShowMinimumTimer), METADATA_PARAMS(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ShowMinimumTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ShowMinimumTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_RunningIconScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveIconScreenManager" },
		{ "ModuleRelativePath", "Public/ELSaveIconScreenManager.h" },
	};
#endif
	void Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_RunningIconScreen_SetBit(void* Obj)
	{
		((UELSaveIconScreenManager*)Obj)->m_RunningIconScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_RunningIconScreen = { "m_RunningIconScreen", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSaveIconScreenManager), &Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_RunningIconScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_RunningIconScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_RunningIconScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSaveIconScreenManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_CheckSaveDataAccessorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_CheckSaveDataAccessorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ScreenExecutor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_ShowMinimumTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveIconScreenManager_Statics::NewProp_m_RunningIconScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSaveIconScreenManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSaveIconScreenManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSaveIconScreenManager_Statics::ClassParams = {
		&UELSaveIconScreenManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSaveIconScreenManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveIconScreenManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSaveIconScreenManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveIconScreenManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSaveIconScreenManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSaveIconScreenManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSaveIconScreenManager, 283750842);
	template<> ABP_200508_API UClass* StaticClass<UELSaveIconScreenManager>()
	{
		return UELSaveIconScreenManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSaveIconScreenManager(Z_Construct_UClass_UELSaveIconScreenManager, &UELSaveIconScreenManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSaveIconScreenManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSaveIconScreenManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
