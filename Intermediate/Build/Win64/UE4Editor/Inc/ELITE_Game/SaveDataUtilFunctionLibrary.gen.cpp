// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/SaveDataUtilFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataUtilFunctionLibrary() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_USaveDataUtilFunctionLibrary_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_USaveDataUtilFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataUtilFunctionLibrary::execConvertBufferToTexture2DDynamic)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2DDynamic**)Z_Param__Result=USaveDataUtilFunctionLibrary::ConvertBufferToTexture2DDynamic(Z_Param_Out_InBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataUtilFunctionLibrary::execConvertRenderTargetToBuffer)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveDataUtilFunctionLibrary::ConvertRenderTargetToBuffer(Z_Param_TextureRenderTarget,Z_Param_Out_OutBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataUtilFunctionLibrary::execConvertRenderTargetToBufferJPEG)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USaveDataUtilFunctionLibrary::ConvertRenderTargetToBufferJPEG(Z_Param_TextureRenderTarget,Z_Param_Out_OutBuffer,Z_Param_Quality);
		P_NATIVE_END;
	}
	void USaveDataUtilFunctionLibrary::StaticRegisterNativesUSaveDataUtilFunctionLibrary()
	{
		UClass* Class = USaveDataUtilFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertBufferToTexture2DDynamic", &USaveDataUtilFunctionLibrary::execConvertBufferToTexture2DDynamic },
			{ "ConvertRenderTargetToBuffer", &USaveDataUtilFunctionLibrary::execConvertRenderTargetToBuffer },
			{ "ConvertRenderTargetToBufferJPEG", &USaveDataUtilFunctionLibrary::execConvertRenderTargetToBufferJPEG },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics
	{
		struct SaveDataUtilFunctionLibrary_eventConvertBufferToTexture2DDynamic_Parms
		{
			TArray<uint8> InBuffer;
			UTexture2DDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InBuffer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_InBuffer_Inner = { "InBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_InBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_InBuffer = { "InBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertBufferToTexture2DDynamic_Parms, InBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_InBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_InBuffer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertBufferToTexture2DDynamic_Parms, ReturnValue), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_InBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_InBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataUtilFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataUtilFunctionLibrary, nullptr, "ConvertBufferToTexture2DDynamic", nullptr, nullptr, sizeof(SaveDataUtilFunctionLibrary_eventConvertBufferToTexture2DDynamic_Parms), Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics
	{
		struct SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBuffer_Parms
		{
			UTextureRenderTarget2D* TextureRenderTarget;
			TArray<uint8> OutBuffer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBuffer_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBuffer_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::NewProp_OutBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::NewProp_OutBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataUtilFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataUtilFunctionLibrary, nullptr, "ConvertRenderTargetToBuffer", nullptr, nullptr, sizeof(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBuffer_Parms), Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics
	{
		struct SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBufferJPEG_Parms
		{
			UTextureRenderTarget2D* TextureRenderTarget;
			TArray<uint8> OutBuffer;
			int32 Quality;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBufferJPEG_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBufferJPEG_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBufferJPEG_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBufferJPEG_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_OutBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_OutBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataUtilFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataUtilFunctionLibrary, nullptr, "ConvertRenderTargetToBufferJPEG", nullptr, nullptr, sizeof(SaveDataUtilFunctionLibrary_eventConvertRenderTargetToBufferJPEG_Parms), Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataUtilFunctionLibrary_NoRegister()
	{
		return USaveDataUtilFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertBufferToTexture2DDynamic, "ConvertBufferToTexture2DDynamic" }, // 383345902
		{ &Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBuffer, "ConvertRenderTargetToBuffer" }, // 3429021445
		{ &Z_Construct_UFunction_USaveDataUtilFunctionLibrary_ConvertRenderTargetToBufferJPEG, "ConvertRenderTargetToBufferJPEG" }, // 3604788560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataUtilFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataUtilFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataUtilFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::ClassParams = {
		&USaveDataUtilFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataUtilFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataUtilFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataUtilFunctionLibrary, 2039549773);
	template<> ELITE_GAME_API UClass* StaticClass<USaveDataUtilFunctionLibrary>()
	{
		return USaveDataUtilFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataUtilFunctionLibrary(Z_Construct_UClass_USaveDataUtilFunctionLibrary, &USaveDataUtilFunctionLibrary::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("USaveDataUtilFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataUtilFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
