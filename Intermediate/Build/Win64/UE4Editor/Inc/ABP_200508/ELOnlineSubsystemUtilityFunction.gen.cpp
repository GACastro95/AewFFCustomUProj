// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELOnlineSubsystemUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELOnlineSubsystemUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineSubsystemUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELOnlineSubsystemUtilityFunction::execSetUsingMultiplayerFeatures)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalControllerId);
		P_GET_UBOOL(Z_Param_bUsingMP);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELOnlineSubsystemUtilityFunction::SetUsingMultiplayerFeatures(Z_Param_LocalControllerId,Z_Param_bUsingMP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineSubsystemUtilityFunction::execShowProfileUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalControllerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSubsystemUtilityFunction::ShowProfileUI(Z_Param_WorldContextObject,Z_Param_LocalControllerId,Z_Param_TargetUserId);
		P_NATIVE_END;
	}
	void UELOnlineSubsystemUtilityFunction::StaticRegisterNativesUELOnlineSubsystemUtilityFunction()
	{
		UClass* Class = UELOnlineSubsystemUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUsingMultiplayerFeatures", &UELOnlineSubsystemUtilityFunction::execSetUsingMultiplayerFeatures },
			{ "ShowProfileUI", &UELOnlineSubsystemUtilityFunction::execShowProfileUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics
	{
		struct ELOnlineSubsystemUtilityFunction_eventSetUsingMultiplayerFeatures_Parms
		{
			int32 LocalControllerId;
			bool bUsingMP;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalControllerId;
		static void NewProp_bUsingMP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::NewProp_LocalControllerId = { "LocalControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSubsystemUtilityFunction_eventSetUsingMultiplayerFeatures_Parms, LocalControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::NewProp_bUsingMP_SetBit(void* Obj)
	{
		((ELOnlineSubsystemUtilityFunction_eventSetUsingMultiplayerFeatures_Parms*)Obj)->bUsingMP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::NewProp_bUsingMP = { "bUsingMP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSubsystemUtilityFunction_eventSetUsingMultiplayerFeatures_Parms), &Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::NewProp_bUsingMP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::NewProp_LocalControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::NewProp_bUsingMP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSubsystemUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSubsystemUtilityFunction, nullptr, "SetUsingMultiplayerFeatures", nullptr, nullptr, sizeof(ELOnlineSubsystemUtilityFunction_eventSetUsingMultiplayerFeatures_Parms), Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics
	{
		struct ELOnlineSubsystemUtilityFunction_eventShowProfileUI_Parms
		{
			const UObject* WorldContextObject;
			int32 LocalControllerId;
			FString TargetUserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalControllerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetUserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSubsystemUtilityFunction_eventShowProfileUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_LocalControllerId = { "LocalControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSubsystemUtilityFunction_eventShowProfileUI_Parms, LocalControllerId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSubsystemUtilityFunction_eventShowProfileUI_Parms, TargetUserId), METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_TargetUserId_MetaData)) };
	void Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSubsystemUtilityFunction_eventShowProfileUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSubsystemUtilityFunction_eventShowProfileUI_Parms), &Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_LocalControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_TargetUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSubsystemUtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSubsystemUtilityFunction, nullptr, "ShowProfileUI", nullptr, nullptr, sizeof(ELOnlineSubsystemUtilityFunction_eventShowProfileUI_Parms), Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_NoRegister()
	{
		return UELOnlineSubsystemUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_SetUsingMultiplayerFeatures, "SetUsingMultiplayerFeatures" }, // 2387808478
		{ &Z_Construct_UFunction_UELOnlineSubsystemUtilityFunction_ShowProfileUI, "ShowProfileUI" }, // 1688233550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELOnlineSubsystemUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELOnlineSubsystemUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELOnlineSubsystemUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::ClassParams = {
		&UELOnlineSubsystemUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELOnlineSubsystemUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELOnlineSubsystemUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELOnlineSubsystemUtilityFunction, 411276679);
	template<> ABP_200508_API UClass* StaticClass<UELOnlineSubsystemUtilityFunction>()
	{
		return UELOnlineSubsystemUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELOnlineSubsystemUtilityFunction(Z_Construct_UClass_UELOnlineSubsystemUtilityFunction, &UELOnlineSubsystemUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELOnlineSubsystemUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELOnlineSubsystemUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
