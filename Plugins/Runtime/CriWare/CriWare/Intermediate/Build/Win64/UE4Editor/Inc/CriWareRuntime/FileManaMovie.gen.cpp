// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/FileManaMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UFileManaMovie::execSetFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilePath(Z_Param_Path);
		P_NATIVE_END;
	}
	void UFileManaMovie::StaticRegisterNativesUFileManaMovie()
	{
		UClass* Class = UFileManaMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFilePath", &UFileManaMovie::execSetFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics
	{
		struct FileManaMovie_eventSetFilePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManaMovie_eventSetFilePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManaMovie, nullptr, "SetFilePath", nullptr, nullptr, sizeof(FileManaMovie_eventSetFilePath_Parms), Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManaMovie_SetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileManaMovie_NoRegister()
	{
		return UFileManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UFileManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrecacheFile_MetaData[];
#endif
		static void NewProp_bPrecacheFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrecacheFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileManaMovie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileManaMovie_SetFilePath, "SetFilePath" }, // 3722393021
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileManaMovie" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
	void Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_SetBit(void* Obj)
	{
		((UFileManaMovie*)Obj)->bPrecacheFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile = { "bPrecacheFile", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFileManaMovie), &Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileManaMovie" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0020090000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileManaMovie, FilePath), METADATA_PARAMS(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileManaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileManaMovie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileManaMovie_Statics::ClassParams = {
		&UFileManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFileManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileManaMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileManaMovie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileManaMovie, 2219910653);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UFileManaMovie>()
	{
		return UFileManaMovie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileManaMovie(Z_Construct_UClass_UFileManaMovie, &UFileManaMovie::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UFileManaMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileManaMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
