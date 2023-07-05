// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELKismetArrayLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELKismetArrayLibrary() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELKismetArrayLibrary_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELKismetArrayLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
// End Cross Module References
	DEFINE_FUNCTION(UELKismetArrayLibrary::execArray_Shuffle)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_TargetArray);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELKismetArrayLibrary::Array_Shuffle(Z_Param_Out_TargetArray,Z_Param_Out_RandomStream);
		P_NATIVE_END;
	}
	void UELKismetArrayLibrary::StaticRegisterNativesUELKismetArrayLibrary()
	{
		UClass* Class = UELKismetArrayLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Array_Shuffle", &UELKismetArrayLibrary::execArray_Shuffle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics
	{
		struct ELKismetArrayLibrary_eventArray_Shuffle_Parms
		{
			TArray<int32> TargetArray;
			FRandomStream RandomStream;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_TargetArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKismetArrayLibrary_eventArray_Shuffle_Parms, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_TargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_TargetArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKismetArrayLibrary_eventArray_Shuffle_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_TargetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_TargetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::NewProp_RandomStream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELKismetArrayLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELKismetArrayLibrary, nullptr, "Array_Shuffle", nullptr, nullptr, sizeof(ELKismetArrayLibrary_eventArray_Shuffle_Parms), Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELKismetArrayLibrary_NoRegister()
	{
		return UELKismetArrayLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UELKismetArrayLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELKismetArrayLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELKismetArrayLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELKismetArrayLibrary_Array_Shuffle, "Array_Shuffle" }, // 3519999658
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKismetArrayLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELKismetArrayLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELKismetArrayLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELKismetArrayLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELKismetArrayLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELKismetArrayLibrary_Statics::ClassParams = {
		&UELKismetArrayLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELKismetArrayLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELKismetArrayLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELKismetArrayLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELKismetArrayLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELKismetArrayLibrary, 3281559639);
	template<> ELITE_CORE_API UClass* StaticClass<UELKismetArrayLibrary>()
	{
		return UELKismetArrayLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELKismetArrayLibrary(Z_Construct_UClass_UELKismetArrayLibrary, &UELKismetArrayLibrary::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELKismetArrayLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELKismetArrayLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
