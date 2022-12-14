// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/PrototypeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeGameMode() {}
// Cross Module References
	PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameMode_NoRegister();
	PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References
	void APrototypeGameMode::StaticRegisterNativesAPrototypeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrototypeGameMode);
	UClass* Z_Construct_UClass_APrototypeGameMode_NoRegister()
	{
		return APrototypeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APrototypeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototypeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototypeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrototypeGameMode.h" },
		{ "ModuleRelativePath", "PrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototypeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototypeGameMode_Statics::ClassParams = {
		&APrototypeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrototypeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototypeGameMode()
	{
		if (!Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton, Z_Construct_UClass_APrototypeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton;
	}
	template<> PROTOTYPE_API UClass* StaticClass<APrototypeGameMode>()
	{
		return APrototypeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeGameMode);
	struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrototypeGameMode, APrototypeGameMode::StaticClass, TEXT("APrototypeGameMode"), &Z_Registration_Info_UClass_APrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototypeGameMode), 2855214806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_1250045578(TEXT("/Script/Prototype"),
		Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
