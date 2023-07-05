// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELChunkInstallUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELChunkInstallUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELChunkInstallUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELChunkInstallUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChunkInstallDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELChunkInstallUtilityFunction::execCheckAllChunkInstalled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChunkInstallUtilityFunction::CheckAllChunkInstalled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChunkInstallUtilityFunction::execIsAllChunkInstalled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELChunkInstallUtilityFunction::IsAllChunkInstalled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChunkInstallUtilityFunction::execSetChunkInstallSuccessDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_chunkInstallDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChunkInstallUtilityFunction::SetChunkInstallSuccessDelegate(FChunkInstallDelegate(Z_Param_chunkInstallDelegate));
		P_NATIVE_END;
	}
	void UELChunkInstallUtilityFunction::StaticRegisterNativesUELChunkInstallUtilityFunction()
	{
		UClass* Class = UELChunkInstallUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAllChunkInstalled", &UELChunkInstallUtilityFunction::execCheckAllChunkInstalled },
			{ "IsAllChunkInstalled", &UELChunkInstallUtilityFunction::execIsAllChunkInstalled },
			{ "SetChunkInstallSuccessDelegate", &UELChunkInstallUtilityFunction::execSetChunkInstallSuccessDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChunkInstallUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChunkInstallUtilityFunction, nullptr, "CheckAllChunkInstalled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics
	{
		struct ELChunkInstallUtilityFunction_eventIsAllChunkInstalled_Parms
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
	void Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELChunkInstallUtilityFunction_eventIsAllChunkInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChunkInstallUtilityFunction_eventIsAllChunkInstalled_Parms), &Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChunkInstallUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChunkInstallUtilityFunction, nullptr, "IsAllChunkInstalled", nullptr, nullptr, sizeof(ELChunkInstallUtilityFunction_eventIsAllChunkInstalled_Parms), Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics
	{
		struct ELChunkInstallUtilityFunction_eventSetChunkInstallSuccessDelegate_Parms
		{
			FScriptDelegate chunkInstallDelegate;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_chunkInstallDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::NewProp_chunkInstallDelegate = { "chunkInstallDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChunkInstallUtilityFunction_eventSetChunkInstallSuccessDelegate_Parms, chunkInstallDelegate), Z_Construct_UDelegateFunction_ABP_200508_ChunkInstallDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::NewProp_chunkInstallDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChunkInstallUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChunkInstallUtilityFunction, nullptr, "SetChunkInstallSuccessDelegate", nullptr, nullptr, sizeof(ELChunkInstallUtilityFunction_eventSetChunkInstallSuccessDelegate_Parms), Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELChunkInstallUtilityFunction_NoRegister()
	{
		return UELChunkInstallUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELChunkInstallUtilityFunction_CheckAllChunkInstalled, "CheckAllChunkInstalled" }, // 2549205476
		{ &Z_Construct_UFunction_UELChunkInstallUtilityFunction_IsAllChunkInstalled, "IsAllChunkInstalled" }, // 2435920227
		{ &Z_Construct_UFunction_UELChunkInstallUtilityFunction_SetChunkInstallSuccessDelegate, "SetChunkInstallSuccessDelegate" }, // 1535328290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELChunkInstallUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELChunkInstallUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELChunkInstallUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::ClassParams = {
		&UELChunkInstallUtilityFunction::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELChunkInstallUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELChunkInstallUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELChunkInstallUtilityFunction, 3825926770);
	template<> ABP_200508_API UClass* StaticClass<UELChunkInstallUtilityFunction>()
	{
		return UELChunkInstallUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELChunkInstallUtilityFunction(Z_Construct_UClass_UELChunkInstallUtilityFunction, &UELChunkInstallUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELChunkInstallUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELChunkInstallUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
