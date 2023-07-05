// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YGS2DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYGS2DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYGS2DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuClientStep();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2CommandData();
	ABP_200508_API UClass* Z_Construct_UClass_UYGS2DebugMenuClient_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2DebugMenu::execOnClientUpdate)
	{
		P_GET_ENUM(EYGS2DebugMenuClientStep,Z_Param__enClientStep);
		P_GET_STRUCT_REF(FYGS2CommandData,Z_Param_Out__rstCommandData);
		P_GET_OBJECT(UYGS2DebugMenuClient,Z_Param__pcClient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClientUpdate(EYGS2DebugMenuClientStep(Z_Param__enClientStep),Z_Param_Out__rstCommandData,Z_Param__pcClient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2DebugMenu::execSetSkipLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkipLogin();
		P_NATIVE_END;
	}
	void UYGS2DebugMenu::StaticRegisterNativesUYGS2DebugMenu()
	{
		UClass* Class = UYGS2DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClientUpdate", &UYGS2DebugMenu::execOnClientUpdate },
			{ "SetSkipLogin", &UYGS2DebugMenu::execSetSkipLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics
	{
		struct YGS2DebugMenu_eventOnClientUpdate_Parms
		{
			EYGS2DebugMenuClientStep _enClientStep;
			FYGS2CommandData _rstCommandData;
			UYGS2DebugMenuClient* _pcClient;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enClientStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enClientStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstCommandData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstCommandData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcClient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__enClientStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__enClientStep = { "_enClientStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenu_eventOnClientUpdate_Parms, _enClientStep), Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuClientStep, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__rstCommandData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__rstCommandData = { "_rstCommandData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenu_eventOnClientUpdate_Parms, _rstCommandData), Z_Construct_UScriptStruct_FYGS2CommandData, METADATA_PARAMS(Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__rstCommandData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__rstCommandData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__pcClient = { "_pcClient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2DebugMenu_eventOnClientUpdate_Parms, _pcClient), Z_Construct_UClass_UYGS2DebugMenuClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__enClientStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__enClientStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__rstCommandData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::NewProp__pcClient,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2DebugMenu, nullptr, "OnClientUpdate", nullptr, nullptr, sizeof(YGS2DebugMenu_eventOnClientUpdate_Parms), Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2DebugMenu, nullptr, "SetSkipLogin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2DebugMenu_NoRegister()
	{
		return UYGS2DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cClients_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cClients;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2DebugMenu_OnClientUpdate, "OnClientUpdate" }, // 3199318428
		{ &Z_Construct_UFunction_UYGS2DebugMenu_SetSkipLogin, "SetSkipLogin" }, // 171436422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYGS2DebugMenu_Statics::NewProp_m_cClients_Inner = { "m_cClients", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UYGS2DebugMenuClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2DebugMenu_Statics::NewProp_m_cClients_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2DebugMenu" },
		{ "ModuleRelativePath", "Public/YGS2DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UYGS2DebugMenu_Statics::NewProp_m_cClients = { "m_cClients", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYGS2DebugMenu, m_cClients), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYGS2DebugMenu_Statics::NewProp_m_cClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2DebugMenu_Statics::NewProp_m_cClients_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYGS2DebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYGS2DebugMenu_Statics::NewProp_m_cClients_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYGS2DebugMenu_Statics::NewProp_m_cClients,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2DebugMenu_Statics::ClassParams = {
		&UYGS2DebugMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYGS2DebugMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2DebugMenu_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2DebugMenu, 438012846);
	template<> ABP_200508_API UClass* StaticClass<UYGS2DebugMenu>()
	{
		return UYGS2DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2DebugMenu(Z_Construct_UClass_UYGS2DebugMenu, &UYGS2DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYGS2DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
