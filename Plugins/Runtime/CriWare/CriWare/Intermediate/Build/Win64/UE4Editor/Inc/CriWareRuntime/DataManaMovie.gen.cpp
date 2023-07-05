// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/DataManaMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDataManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDataManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDataManaMovie::execGetDataArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetDataArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataManaMovie::execSetDataArray)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataArray(Z_Param_Out_InDataArray);
		P_NATIVE_END;
	}
	void UDataManaMovie::StaticRegisterNativesUDataManaMovie()
	{
		UClass* Class = UDataManaMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataArray", &UDataManaMovie::execGetDataArray },
			{ "SetDataArray", &UDataManaMovie::execSetDataArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics
	{
		struct DataManaMovie_eventGetDataArray_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataManaMovie_eventGetDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataManaMovie, nullptr, "GetDataArray", nullptr, nullptr, sizeof(DataManaMovie_eventGetDataArray_Parms), Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataManaMovie_GetDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics
	{
		struct DataManaMovie_eventSetDataArray_Parms
		{
			TArray<uint8> InDataArray;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDataArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray_Inner = { "InDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray = { "InDataArray", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataManaMovie_eventSetDataArray_Parms, InDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataManaMovie, nullptr, "SetDataArray", nullptr, nullptr, sizeof(DataManaMovie_eventSetDataArray_Parms), Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataManaMovie_SetDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDataManaMovie_NoRegister()
	{
		return UDataManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UDataManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataManaMovie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataManaMovie_GetDataArray, "GetDataArray" }, // 1164760862
		{ &Z_Construct_UFunction_UDataManaMovie_SetDataArray, "SetDataArray" }, // 1401130753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataManaMovie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataManaMovie_Statics::ClassParams = {
		&UDataManaMovie::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataManaMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataManaMovie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataManaMovie, 3000489056);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UDataManaMovie>()
	{
		return UDataManaMovie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataManaMovie(Z_Construct_UClass_UDataManaMovie, &UDataManaMovie::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UDataManaMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataManaMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
