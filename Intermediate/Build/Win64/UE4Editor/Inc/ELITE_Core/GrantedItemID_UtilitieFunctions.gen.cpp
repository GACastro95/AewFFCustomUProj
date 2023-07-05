// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/GrantedItemID_UtilitieFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrantedItemID_UtilitieFunctions() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UGrantedItemID_UtilitieFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPickableItemID();
// End Cross Module References
	DEFINE_FUNCTION(UGrantedItemID_UtilitieFunctions::execGetUID)
	{
		P_GET_STRUCT_REF(FPickableItemID,Z_Param_Out_Target);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGrantedItemID_UtilitieFunctions::GetUID(Z_Param_Out_Target,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	void UGrantedItemID_UtilitieFunctions::StaticRegisterNativesUGrantedItemID_UtilitieFunctions()
	{
		UClass* Class = UGrantedItemID_UtilitieFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUID", &UGrantedItemID_UtilitieFunctions::execGetUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics
	{
		struct GrantedItemID_UtilitieFunctions_eventGetUID_Parms
		{
			FPickableItemID Target;
			int32 Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrantedItemID_UtilitieFunctions_eventGetUID_Parms, Target), Z_Construct_UScriptStruct_FPickableItemID, METADATA_PARAMS(Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrantedItemID_UtilitieFunctions_eventGetUID_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrantedItemID_UtilitieFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrantedItemID_UtilitieFunctions, nullptr, "GetUID", nullptr, nullptr, sizeof(GrantedItemID_UtilitieFunctions_eventGetUID_Parms), Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_NoRegister()
	{
		return UGrantedItemID_UtilitieFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrantedItemID_UtilitieFunctions_GetUID, "GetUID" }, // 2636858873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GrantedItemID_UtilitieFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GrantedItemID_UtilitieFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrantedItemID_UtilitieFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::ClassParams = {
		&UGrantedItemID_UtilitieFunctions::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrantedItemID_UtilitieFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrantedItemID_UtilitieFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrantedItemID_UtilitieFunctions, 1818182284);
	template<> ELITE_CORE_API UClass* StaticClass<UGrantedItemID_UtilitieFunctions>()
	{
		return UGrantedItemID_UtilitieFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrantedItemID_UtilitieFunctions(Z_Construct_UClass_UGrantedItemID_UtilitieFunctions, &UGrantedItemID_UtilitieFunctions::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UGrantedItemID_UtilitieFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrantedItemID_UtilitieFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
