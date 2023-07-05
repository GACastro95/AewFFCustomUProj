// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineTestUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineTestUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOnlineTestUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOnlineTestUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocatorManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSOnlineTestUtility::execGetSSOnlineTestLocatorManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSLocatorManager**)Z_Param__Result=UELSSOnlineTestUtility::GetSSOnlineTestLocatorManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineTestUtility::execIsSSModeOnlineTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSOnlineTestUtility::IsSSModeOnlineTest();
		P_NATIVE_END;
	}
	void UELSSOnlineTestUtility::StaticRegisterNativesUELSSOnlineTestUtility()
	{
		UClass* Class = UELSSOnlineTestUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSSOnlineTestLocatorManager", &UELSSOnlineTestUtility::execGetSSOnlineTestLocatorManager },
			{ "IsSSModeOnlineTest", &UELSSOnlineTestUtility::execIsSSModeOnlineTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics
	{
		struct ELSSOnlineTestUtility_eventGetSSOnlineTestLocatorManager_Parms
		{
			AELSSLocatorManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestUtility_eventGetSSOnlineTestLocatorManager_Parms, ReturnValue), Z_Construct_UClass_AELSSLocatorManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineTestUtility, nullptr, "GetSSOnlineTestLocatorManager", nullptr, nullptr, sizeof(ELSSOnlineTestUtility_eventGetSSOnlineTestLocatorManager_Parms), Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics
	{
		struct ELSSOnlineTestUtility_eventIsSSModeOnlineTest_Parms
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
	void Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineTestUtility_eventIsSSModeOnlineTest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineTestUtility_eventIsSSModeOnlineTest_Parms), &Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineTestUtility, nullptr, "IsSSModeOnlineTest", nullptr, nullptr, sizeof(ELSSOnlineTestUtility_eventIsSSModeOnlineTest_Parms), Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSOnlineTestUtility_NoRegister()
	{
		return UELSSOnlineTestUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSOnlineTestUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSOnlineTestUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSOnlineTestUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSOnlineTestUtility_GetSSOnlineTestLocatorManager, "GetSSOnlineTestLocatorManager" }, // 3749507086
		{ &Z_Construct_UFunction_UELSSOnlineTestUtility_IsSSModeOnlineTest, "IsSSModeOnlineTest" }, // 368697242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineTestUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSOnlineTestUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSOnlineTestUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSOnlineTestUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSOnlineTestUtility_Statics::ClassParams = {
		&UELSSOnlineTestUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineTestUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSOnlineTestUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSOnlineTestUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSOnlineTestUtility, 2147159930);
	template<> ABP_200508_API UClass* StaticClass<UELSSOnlineTestUtility>()
	{
		return UELSSOnlineTestUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSOnlineTestUtility(Z_Construct_UClass_UELSSOnlineTestUtility, &UELSSOnlineTestUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSOnlineTestUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSOnlineTestUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
